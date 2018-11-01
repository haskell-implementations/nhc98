/*
 * Context while rendering Pretty Objects
 *
 * Copyright 2000 Andy Gill
 *
 * $Revision: 1.1 $
 * $Date: 2000/09/15 16:14:17 $
 */

import java.util.*;

/**
 * @version 0.1
 * @author Andy Gill
 */

class PrettyContext {
    private int height = 0;
    public int width;		      // Max width
    public int currWidth;	      // Curr x coord	
    private PrettyContentWidgets text; 
                                      // Should be the same DocI in model
    public PrettyContext probation;   // If you have a exception handler
    public PrettyCommand commands;    // the remaing pretty commands


    public PrettyContext(int maxColumn,PrettyCommand pc) {
	this.width = maxColumn;
	this.currWidth = 0;
	text = new PrettyContentWidgets();
	probation = null;
	commands = pc;
    }    

    public PrettyCommand getNextCommand() {
	PrettyCommand pc = commands;
	if (pc != null) {
	    commands = commands.next;
	}
	return pc;
    }
    public void pushNextCommand(PrettyCommand pc) {
	PrettyCommand oldPc = commands;
	commands = pc;
	pc.next = oldPc;
    }

    public void pushHandler() {
	PrettyContext pc = new PrettyContext(width,commands);
	pc.currWidth = currWidth;
	pc.text = new PrettyContentWidgets(text);
	pc.height = height;
	pc.probation = probation; // pc is now a copy of this
	probation = pc;           // and we store it as a backup plan
	if (currWidth > width) {
	    popHandler();
	}
    }

    public void popHandler() {
	Message.message("using pop!");
	if (probation == null) {
	    // Can't backtrack, so make do with what we have
	    return;
	}
	width = probation.width;
	height = probation.height;
	currWidth = probation.currWidth;
	text = probation.text;
	commands = probation.commands;
	probation = probation.probation;
	// Now, we reset the attempt to write on one line
	// before we start again.
	if (commands != null) {
	    commands.flattened = false;
	}
    }

    public void print(PrettyStep ps,String str,boolean flattened,int prop) {
	int psi = -1;
	if (ps != null) {
	    psi = ps.getBirthId();
	}
	text.addText(psi,Integer.MAX_VALUE,currWidth,height,str,prop);
	currWidth += str.length();
	if (currWidth > width) {
	    popHandler();
	}
    }

    public void shadow(int b,int d,String str,boolean flattened,int prop) {
	text.addText(b,d,currWidth,height,str,prop);
    }

    public void newline(int n) {
	height++;
	currWidth = n;
	probation = null;
    }

    public void setWidgets(PrettyDisplay pd) {
	pd.setContent(text.pcw);
    }
}

final class PrettyContentWidgets {
    public PrettyContentWidget pcw;
    
    public PrettyContentWidgets() {
	pcw = null;
    }
    public PrettyContentWidgets(PrettyContentWidgets pcws) {
	this.pcw = pcws.pcw;
    }
    // text has a life!

    // <--------><enterId---------------><nodeId------------>
    // _         ?                       "real text"


    public void addText(int b,int d,int x,int y,String str,int prop) {
	PrettyContentWidget pcw 
	    = new PrettyContentWidget(x,y,str,prop,b,d);
	pcw.next = this.pcw;
	if (this.pcw != null) {
	    this.pcw.prec = pcw;
	}
	this.pcw = pcw;
    }
    public void sendToDisplay(PrettyDisplay pd) {
	pd.setContent(pcw);
    }
}

