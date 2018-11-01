/*
 * Basic messaging services; typically for debugging and testing.
 *
 * Copyright 2000 Andy Gill
 *
 * $Revision: 1.1 $
 * $Date: 2000/09/15 16:14:17 $
 */

import java.lang.Error;
import java.awt.*;
import java.io.*;
/**
 * @version 0.1
 * @author Andy Gill
 */

/** 
 * <p>
 * Basic messaging services; typically for debugging and testing.
 * <ul>
 * <li> abort
 * <li> message
 * <li> wait
 * </ul>
 *
 * In the context of an applet, we write to a message window.
 *
 */

public class Message {
    static TextArea textArea;
    static boolean applet = false;

    public static void applet() {
	if (Hood.build == Hood.DEBUG) {
	    applet = true;
	    if (textArea == null) {
		Frame frame;
		frame = new Frame();
		frame.setSize(300,400);
		frame.setTitle("Debugging Messages");
		
		textArea = new TextArea();
		frame.add(textArea);
		frame.show();
	    } else {
		// textArea.append("\n--\n");
	    }
	}
    }

    public static void abort(String msg) {
	if (Hood.build == Hood.DEBUG) {
	    Message.message("[Abort]" + msg);
	    throw new Error("Abort: " + msg);
	}
    }


    public static void message(String msg) {
	if (Hood.build == Hood.DEBUG) {
	    if (textArea == null) {
		System.out.println("Message: " + msg);
	    } else {
		textArea.append("Message: " + msg + "\n");
	    }
	}
    }
    
    public static void wait(String msg) {
	if (Hood.build == Hood.DEBUG) {
	    if (textArea == null) {
		System.out.println("Waiting: " + msg);
		int nl = (int)System.getProperty("line.separator").charAt(0);
		int n = 0;
		try {
		    while (n != nl) {
			n = System.in.read();
		    }
		} catch (IOException e) {
		    
		}
	    }
	}
    }
}
