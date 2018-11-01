/*
 * Handler with callbacks for our XML parser.
 *
 * Copyright 2000 Andy Gill
 *
 * $Revision: 1.1 $
 * $Date: 2000/09/15 16:14:17 $
 */


import com.microstar.xml.XmlHandler;
import com.microstar.xml.XmlParser;
/**
 * @version 0.1
 * @author Andy Gill
 */

public class XmlObsHandler implements XmlHandler {
    private AllCDS allCDS;
    private int nodeId;
    private int parentNodeId;
    private int parentPort;
    private int portCount;
    private String consName = "";
    private String text     = "";
    private String version  = "";

    private void resetAttr () {
	nodeId = -1;
	parentNodeId = -1;
	parentPort = -1;
	portCount = -1;
	consName = null;
	text = null;
    }
    
    public XmlObsHandler(AllCDS allCDS) {
	this.allCDS = allCDS;
	resetAttr();
    }

    public void startDocument () {
	// This should reset the AllCDS structure.
    }
    public void endDocument () {
	// This should freeze the AllCDS structure.
    }
    public Object resolveEntity (String publicId, String systemId) {
	return null;
    }

    public void attribute (String aname, String value, boolean isSpecified) {
	if (aname.equals("node")) {
	    nodeId = Integer.parseInt(value);
	} else if (aname.equals("pnode")) {
	    parentNodeId = Integer.parseInt(value);
	} else if (aname.equals("pnode")) {
	    parentNodeId = Integer.parseInt(value);
	} else if (aname.equals("pport")) {
	    parentPort = Integer.parseInt(value);
	} else if (aname.equals("ports")) {
	    portCount = Integer.parseInt(value);
	} else if (aname.equals("cons")) {
	    consName = value.intern();
	} else if (aname.equals("text")) {
	    text = value.intern();
	} else if (aname.equals("hoodversion")) {
	    version = value;
	} else {
	    Message.abort("strange attribute=" + aname);
	}
    }
    public void startElement (String elname) {
	if (elname.equals("observe")) {
	    if (nodeId == -1 || text == null) {
		Message.abort("observe not fully defined");
	    }
	    allCDS.addObserveNode(nodeId,text);
	} else if (elname.equals("cons")) {
	    if (nodeId == -1 ||
		parentNodeId == -1 ||
		parentPort == -1 ||
		portCount == -1 ||
		consName == null) {
		Message.abort("cons not fully defined");
	    }
	    allCDS.addConsNode(nodeId,parentNodeId,
			       parentPort,portCount,
			       consName);
	} else if (elname.equals("fun")) {
	    if (nodeId == -1 ||
		parentNodeId == -1 ||
		parentPort == -1) {
		Message.abort("fun not fully defined");
	    }
	    allCDS.addFunNode(nodeId,parentNodeId,parentPort);
	} else if (elname.equals("enter")) {
	    if (nodeId == -1 ||
		parentNodeId == -1 ||
		parentPort == -1) {
		Message.abort("enter not fully defined");
	    }
	    allCDS.addEnterNode(nodeId,parentNodeId,parentPort);
	} else if (elname.equals("observations")) {
	    if (!version.equals(Hood.version)) {
		Message.abort("reading wrong version of trace log" +
			      " expecting: " + Hood.version +
			      " found: " + version);
	    }
	} else {
	    Message.abort("strange element=" + elname);
	}
    }


    public void error (String message,
		       String systemId,
		       int line,
		       int column) {
	Message.abort("<" + message + ">");
    }

    public void startExternalEntity (String systemId) {}
    public void endExternalEntity (String systemId) {} 
    public void doctypeDecl (String name, String publicId, String systemId) {}
    public void endElement (String elname) { }
    public void charData (char ch[], int start, int length) {}
    public void ignorableWhitespace (char ch[], int start, int length) {}
    public void processingInstruction (String target, String data) {}
}
