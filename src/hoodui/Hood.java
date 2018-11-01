/*
 * Top level driver for standalone use.
 *
 * Copyright 2000 Andy Gill
 *
 * $Revision: 1.1 $
 * $Date: 2000/09/15 16:14:17 $
 */

import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.net.URL;

/**
 * @version 0.1
 * @author Andy Gill
 */

/** 
 * <p>
 * Top level driver for standalone use.
 * Global contants are also defined here.
 * </p>
 */

public class Hood implements WindowListener {
    public static final int RELEASE = 0;
    public static final int DEBUG   = 1;
    public static final int build   = DEBUG;

    public static final Color bg     = new Color(192,192,192);
    public static final Color textBg = new Color(255,255,255);
    public static final Color textFg = new Color(0,0,0);

    public static final String version = "0.1";

    public static void main(String argv[]) throws Exception {
	if (argv.length < 1) {
	    System.out.println("useage: java hood <filename.xml>");
	}
	String currentDirectory = System.getProperty("user.dir");
	String fileSep = System.getProperty("file.separator");
	String file = currentDirectory.replace(fileSep.charAt(0), '/') + '/';
	if (file.charAt(0) != '/') {
	    file = "/" + file;
	}
	file = "file:" + file + argv[0];
	Message.message(file);

	Frame frame = new Frame();
	frame.setSize(500,400);
	frame.setTitle("Haskell Object Observation Debugger");
	frame.addWindowListener(new Hood());

	Image logo = frame
	    .getToolkit()
	    .getImage(new URL("file:/d:/master/hood/src/hood.gif"));

	new HoodTopLevel(file,frame,logo);

	frame.show();
    }

    public void windowClosing(WindowEvent e) { 
	System.exit(0);
    }
    public void windowOpened(WindowEvent e) {}
    public void windowClosed(WindowEvent e) {}
    public void windowIconified(WindowEvent e) {}
    public void windowDeiconified(WindowEvent e) {}
    public void windowActivated(WindowEvent e) {}
    public void windowDeactivated(WindowEvent e) {}
}
