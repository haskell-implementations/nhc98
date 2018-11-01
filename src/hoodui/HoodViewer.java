/*
 * A Viewer for each structure.
 *
 * Copyright 2000 Andy Gill
 *
 * $Revision: 1.1 $
 * $Date: 2000/09/15 16:14:17 $
 */

import java.lang.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;

/**
 * @version 0.1
 * @author Andy Gill
 */


class HoodViewer extends Frame implements ActionListener,WindowListener {
    final static int START  = 0;
    final static int END    = 1;
    final static int STATIC = 2;

    String observeLabel;
    CDS stuff; 			// our root node
    Frame frame;
    HoodText textarea;
    ScrollPane scroller;
    private Button 
	startButton = new Button("<<"),
	backButton = new Button("<"),
	forwardButton = new Button(">"),
	endButton = new Button(">>");
    int currNode = 0;
    int targetNode;
    HoodVector allNodes;  // vector of nodes.
    int[] allIx;
    Pretty pretty;
    boolean isStatic = false;


    HoodViewer(String observeLabel,CDS stuff,int firstStyle) {
	super();
	if (firstStyle == STATIC) {
	    isStatic = true;
	}

	this.observeLabel = observeLabel;
	this.stuff = stuff;

	// frame = new Frame();
	this.setBackground(Hood.bg);
	this.setLayout(new BorderLayout());
	this.setSize(800,500);
	this.setTitle(observeLabel);

	this.addWindowListener(this);

	textarea = new HoodText(observeLabel);
	textarea.setFontSize(15);
	textarea.setBackground(Hood.textBg);
	textarea.setForeground(Hood.textFg);

	scroller = new ScrollPane();
	scroller.add(textarea);

	this.add("Center",scroller);

	Panel p = new Panel();

	p.add(startButton);
	p.add(backButton);
	p.add(forwardButton);
	p.add(endButton);

	this.add("North",p);

	this.show();

	startButton.addActionListener(this);
	backButton.addActionListener(this);
	forwardButton.addActionListener(this);
	endButton.addActionListener(this);

	allNodes = new HoodVector();
	allNodes.setElementAt(stuff,0);
	stuff.visitNodes(allNodes);

	String txt = "";
	allIx = allNodes.indexes();
	if (firstStyle == END || firstStyle == STATIC) {
	    currNode = allIx.length - 1;
	}
	pretty = stuff.render(null,0,false);
	pretty.best(80,textarea);
	showAt(currNode);
	this.validate();
    }

    public void showAt(int vtime) {
	int realtime = allIx[vtime];
	CDS cds = (CDS) allNodes.elementAt(realtime);
	// realtime is current timestamp
	Message.message("showAt" + vtime);
	textarea.setStep(realtime);
	textarea.repaint();
    }

    public void actionPerformed(ActionEvent e) {
	Button b = (Button) e.getSource();
	if (b == forwardButton) {
	    if (currNode < allIx.length - 1) {
		currNode++;
		showAt(currNode);
	    }
	} else if (b == backButton) {
	    if (currNode > 0) {
		currNode--;
		showAt(currNode);
	    }
	} else if (b == startButton) {
	    currNode = 0;
	    showAt(currNode);
	} else if (b == endButton) {
	    currNode = allIx.length - 1;
	    showAt(currNode);
	} else {
	    Message.message("B:" + b.getLabel());
	}
	Message.message("C:" + currNode + " " + allIx.length);
    }

    // WindowListener

    public void windowClosing(WindowEvent e) { this.dispose(); }
    public void windowOpened(WindowEvent e) {}
    public void windowClosed(WindowEvent e) {}
    public void windowIconified(WindowEvent e) {}
    public void windowDeiconified(WindowEvent e) {}
    public void windowActivated(WindowEvent e) {}
    public void windowDeactivated(WindowEvent e) {}

}
