/*
 * Top level applet driver.
 *
 * Copyright 2000 Andy Gill
 *
 * $Revision: 1.1 $
 * $Date: 2000/09/15 16:14:17 $
 */

import java.applet.*;


import java.net.*;
/**
 * @version 0.1
 * @author Andy Gill
 */

/** 
 * <p>
 * Top level applet driver.
 * </p>
 */

public class HoodApplet extends Applet {

    /** 
     * Typical use of Hood as an applet might be
     * <PRE>
     * &lt;HEADER&gt;
     *  &lt;TITLE&gt;Haskell Object Observation Debugger&lt;/TITLE&gt;
     * &lt;/HEADER&gt;
     * &lt;BODY BGCOLOR=&quot;#cccc99&quot;&gt;
     *  &lt;P ALIGN=&quot;CENTER&quot;&gt;
     *   &lt;APPLET code=&quot;Hood.class&quot; width=500 height=300&gt;&gt;
     *    &lt;PARAM name=&quot;URL&quot; 
     *              value=&quot;file:/d:/Ideas/Debugger/observe.xml&quot;&gt;
     *   &lt;/APPLET&gt;
     *  &lt;/P&gt;
     * &lt;/BODY&gt;
     * </PRE>
     */

    public void init() {
	Message.applet();
	String filename = getParameter("file");
	String path = getDocumentBase().toString();
	String fileSep = System.getProperty("file.separator");
	int n = path.lastIndexOf(fileSep);
	if (n == -1) {
	    n = path.lastIndexOf('\\');
	}
	if (n == -1) {
	    n = path.lastIndexOf('/');
	}
	if (n != -1) {
	    String file = path.substring(0,n+1) + filename;
	    Message.message(file);
	    new HoodTopLevel(file,
			     this,
			     getImage(getCodeBase(),"hood.gif")
			     );
	}
    }
}
