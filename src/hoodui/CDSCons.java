/*
 * Basic class for the "Concreate Data Structure" datatype.
 *
 * Copyright 2000 Andy Gill
 *
 * $Revision: 1.1 $
 * $Date: 2000/09/15 16:14:17 $
 */

import java.util.*;
/**
  *
  * @author Andy Gill
  * @version 0.1
  */

public class CDSCons extends CDS {
    protected int enterId;	// The time this node was entered
    protected String consName;	// The name of this constructor
    protected CDS children[];	// The children, null == not entered

  /**
    * Construct a basic CDS object.
    */

    public CDSCons(int nodeId,String consName,int childCount) {
	this.nodeId = nodeId;
 	this.consName = consName;
	children = new CDS[childCount];
	for(int i = 0;i < children.length;i++) {
	    children[i] = CDSUnknown.unknown;
	}	
	enterId = -1;
    }

    /* Adding a child to a specific node.
     */

    public void addChild(CDS child,int portNo) {
	if (portNo < 0 || portNo >= children.length) {
	    Message.abort("connecting to non-existent port");
	}
	children[portNo] = children[portNo].adding(child);
    }

    protected CDS adding(CDS newChild) {
	Message.abort("Can not update WHNF with another WHNF");
	return null;
    }

    protected void addEnterId(int enterId) {
	this.enterId = enterId;
    }

    public void visitNodes(HoodVector nodes) {
	_visitNodes(nodes);
    }
    protected void _visitNodes(HoodVector nodes) {
	if (enterId != -1) {
	    nodes.setElementAt(this,enterId);
	}
	nodes.setElementAt(this,nodeId);
	for(int i = 0;i < children.length;i++) {
	    if (children[i] != null) {
		children[i].visitNodes(nodes);
	    }
	}	
    }

    private Pretty addEval(PrettyStep parent,Pretty p) {
	PrettyMany pm = Pretty.nil();
	int pi = -1;
	if (parent != null) {
	    pi = parent.getBirthId();
	}
	if (enterId != -1) {
	    pm._shadow(pi,enterId,"_",Pretty.UNEVAL);
	    pm._shadow(enterId,nodeId,"?",Pretty.UNEVAL);
	} else {
	    pm._shadow(pi,nodeId,"_",Pretty.UNEVAL);
	}
	pm.add(p);
	return pm;
    }

    public Pretty render(PrettyStep parent,int prec,boolean par) {
	Pretty ret = null;
	PrettyMany pm = Pretty.nil();
	if ((consName == ":" && children.length == 2)
	    || (consName == "(:)" && children.length == 2)) {
	    boolean needParen = prec > 4;
	    PrettyMany elem = Pretty.nil();
	    elem._brk();
	    addEval(parent,elem);
	    elem.add(children[0].render(this,5,false));
	    elem._text(this," : ",Pretty.CONS);
	    pm._group(this,elem);
	    pm.add(children[1].render(this,4,true));
	    if (par && !needParen) {
		ret = pm;
	    } else {
		ret = Pretty.paren(this,needParen,Pretty.nest(this,0,pm));
	    }
	} else if (consName.length() > 1
		   && consName.charAt(0) == ':'
		   && children.length == 2) {
	    pm.add(children[0].render(this,10,false));
	    addEval(parent,pm);
	    pm._text(this," " + consName + " ",Pretty.CONS);
	    pm.add(children[1].render(this,10,true));
	    ret = Pretty.paren(this,true,Pretty.nest(this,0,pm));
	} else if (consName == ","
		   || consName == "(,)"
		   || consName == "(,,)"
		   || consName == "(,,,)"
		   || consName == "(,,,,)") {
	    boolean first = true;
	    for(int i = 0;i < children.length;i++) {
		if (first) {
		    addEval(parent,pm);
		    pm._text(this,"(",Pretty.CONS);
		    first = false;
		} else {
		    pm._text(this,",",Pretty.CONS);
		}
		pm.add(children[i].render(this,0,false));
	    }
	    pm._text(this,")",Pretty.CONS);
	    ret = Pretty.nest(this,2,pm);
	} else {
	    boolean needParen = children.length > 0 && prec != 0;
	    addEval(parent,pm);
	    if (children.length == 0) {
		pm._text(this,consName,Pretty.PRIM);
	    } else {
		pm._text(this,consName,Pretty.CONS);
	    }
	    for(int i = 0;i < children.length;i++) {
		pm._sep(this);
		pm.add(children[i].render(this,10,false));
	    }
	    Pretty p = Pretty.nest(this,2,pm);
	    ret = Pretty.paren(this,needParen,p);
	}
	return addEval(parent,ret);
    }
    
    
    /**
     * Basic debugging support; accurately dump out the structure.
     */
    
    public String toString() {
	if (children.length == 0) {
	return consName;
	}
	
	String txt = "(" + consName;
	for(int i = 0;i < children.length;i++) {
	    txt += " ";
	    txt += toString(children[i]);
	    }	
	txt += ")";
	return txt;
    }

    protected String toString(CDS cds) {
	if (cds == null) {
	    return "_";
	} else {
	    return cds.toString();
	}
    }


}
