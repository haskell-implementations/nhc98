/*
 * Render choices of observations to the user.
 *
 * Copyright 2000 Andy Gill
 *
 * $Revision: 1.2 $
 * $Date: 2001/05/17 10:41:19 $
 */

import com.microstar.xml.XmlParser;

import java.awt.*;
import java.awt.event.*;
import java.awt.image.*;
import java.util.*;
import java.net.URL;

/**
 * @version 0.1
 * @author Andy Gill
 */

/**
 *   This class is an observer of AllCDS,
 *   and typically displays the top level
 *   choices for the Hood user.
 */

public class HoodTopLevel implements ActionListener {
    private AllCDS cds;
    private java.awt.List list;
    private Hashtable listHt;
    private Panel reload;
    private TextField textfield;
    private HoodXmlThread xmlThread;
    private Button 
	reloadButton = new Button("Reload"),
	beforeEvalButton = new Button("Display Before Evaluation"),
	afterEvalButton = new Button("Display After Evaluation"),
	staticButton = new Button("Display Statically"),
	textButton = new Button("Dump To File");
    int nodeCount;
    Label nodeCountLabel = new Label("");

    private void setGBC(int gridx,
			int gridy,
			int gridwidth,
			int gridheight,
			GridBagConstraints c) {
	c.gridx = gridx;
	c.gridy = gridy;
	c.gridwidth = gridwidth;
	c.gridheight = gridheight;
	c.weightx = c.weighty = 0.0;
	c.fill = GridBagConstraints.BOTH;
    }

    public HoodTopLevel(String pathName,
			Container window,
			Image logo) {
	cds = new AllCDS(this);

	window.setBackground(Hood.bg);

	window.setLayout(new GridBagLayout());

	GridBagConstraints c = new GridBagConstraints();
	c.insets = new Insets(5,5,5,5);

	//---------------------------------------------------
	// First line: <reload/loading> [textbox] HOOD(right)

	setGBC(0,0,1,1,c);
	reload = new Panel();
	reload.add("Center",reloadButton);
	window.add(reload,c);

	setGBC(1,0,1,1,c);
	c.weightx = 1.0;
	c.fill = GridBagConstraints.HORIZONTAL;
	textfield = new TextField(pathName);
	window.add(textfield,c);

	setGBC(2,0,1,1,c);
	window.add(new CornerIcon(logo));

	//---------------------------------------------------
	// The main listbox

	list = new java.awt.List(10,true);

	setGBC(0,1,2,6,c);
	c.weightx = c.weighty = 1.0;
	window.add(list,c);

	//---------------------------------------------------
	// The Buttons

	setGBC(2,1,1,1,c);
	window.add(beforeEvalButton,c);

	setGBC(2,2,1,1,c);
	window.add(afterEvalButton,c);

	setGBC(2,3,1,1,c);
	window.add(staticButton,c);

	setGBC(2,4,1,1,c);
	window.add(textButton,c);

	setGBC(2,5,1,1,c);
	c.weighty = 1.0;	
	window.add(new Label(""),c);

	setGBC(2,6,1,1,c);
	c.weightx = c.weighty = 0.0;
	window.add(nodeCountLabel,c);

	reloadButton.addActionListener(this);
	beforeEvalButton.addActionListener(this);
	afterEvalButton.addActionListener(this);
	staticButton.addActionListener(this);	
	textButton.addActionListener(this);	

	doReload();
	Message.message("about to return..");
    }

    public void finishedLoading(boolean bool) {
	displayNodeCount();
	reloadButton.setEnabled(true);
	if (bool == false) {
	    // Opps, we've failed!
	    list.addItem("** failed to load xml file **");
	} else {
	    // Ok, we've loaded on up our xml file.
	    if (list.getRows() > 0) {
		beforeEvalButton.setEnabled(true);
		afterEvalButton.setEnabled(true);
		staticButton.setEnabled(true);
		textButton.setEnabled(true);
	    }
	}
    }

    private void doReload() {
	reloadButton.setEnabled(false);
	beforeEvalButton.setEnabled(false);
	afterEvalButton.setEnabled(false);
	staticButton.setEnabled(false);
	textButton.setEnabled(false);

	list.removeAll();
	resetNodeCount();
	xmlThread = new HoodXmlThread(textfield.getText(),this,cds);
	xmlThread.start();
   }

    //---------------------------------------------------------
    // The observer uses these

    // This is a ticky-ticky thing, used to track progress.

    public void newNode() {
	nodeCount++;
	if (nodeCount % 1000 == 0) {
	    displayNodeCount();
	}
    }

    boolean first = true;
    public void newRootSet(String name) {
	list.addItem(name);
	// Once we get at least one thing, 
	list.select(0);
    }

    //---------------------------------------------------------

    private void resetNodeCount() {
	nodeCount = 0;
	displayNodeCount();
    }
    
    private void displayNodeCount() {
	nodeCountLabel.setText("Loaded " + nodeCount + " events");
    }


    public void actionPerformed(ActionEvent e) {
	Button b = (Button) e.getSource();
	if (b == reloadButton) {
	    doReload();
	} else {
	    int start = HoodViewer.START;
	    String labels[] = list.getSelectedItems();
	    for(int i = 0;i < labels.length;i++) {

		CDS stuff = cds.getContents(labels[i]);
		
		if (b == beforeEvalButton) {
		    start = HoodViewer.START;
		    new HoodViewer(labels[i],stuff,start);
		}
		if (b == afterEvalButton) {
		    start = HoodViewer.END;
		    new HoodViewer(labels[i],stuff,start);
		}
		if (b == staticButton) {
		    start = HoodViewer.STATIC;
		    new HoodViewer(labels[i],stuff,start);
		}
		if (b == textButton) {
		    Message.message("Hello!");
		    Pretty pretty = stuff.render(null,0,false);
		    PrettyDisplayText pdt = new PrettyDisplayText();
		    pretty.best(80,pdt);
		    Message.message("PP:" + pdt.toString());
		}
	    }
	}
	Message.message("B:" + b.getLabel());
    }
}
/* We use this class to load the Xml trace log in the background.
 * 
 */
final class HoodXmlThread extends Thread {
    String filename;
    HoodTopLevel htl;
    AllCDS cds;

    HoodXmlThread(String name,HoodTopLevel htl,AllCDS cds) {
	filename = name;
	this.htl = htl;
	this.cds = cds;
	setPriority(MIN_PRIORITY);
    }

    public void run() {
	cds.resetNodes();
	XmlObsHandler handler = new XmlObsHandler(cds);
	XmlParser parser = new XmlParser();
	parser.setHandler(handler);
	try {
	    parser.parse(filename,null,(String) null);
	    htl.finishedLoading(true);
	} catch (Exception e) {
	    Message.message("Opps " + e.toString());
	    htl.finishedLoading(false);
	}

    }

}
final class CornerIcon extends Canvas {
    Image cornerIcon;

    CornerIcon(Image logo) {
	setSize(90,50);
	cornerIcon = logo;
    }

    public void paint(Graphics g) {    
	System.out.println("X" + (cornerIcon == null));
	g.drawImage(cornerIcon,5,5,this);
    }
}
