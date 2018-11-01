/*
 * Class for displaying text.
 *
 * Copyright 2000 Andy Gill
 *
 * $Revision: 1.1 $
 * $Date: 2000/09/15 16:14:17 $
 */

import java.awt.*;
import java.util.*;

/**
  *
  * @author Andy Gill
  * @version 0.1
  */

class HoodText extends Canvas implements PrettyDisplay {
    int areaPixWidth = 300;	// In Pixels
    int areaPixHeight = 300;	// In Pixels
    int x = 0;
    int y = 0;
    private PrettyContentWidget pcw = null;	// The text to be printed.
    Font[] fonts = new Font[4];
    static Color[] colors = { 
	Color.black, Color.black, Color.blue, Color.magenta, Color.red,
	Color.gray, Color.gray, Color.gray, Color.gray, Color.gray };
    static String fontName = "";
    static final int xOffset = 5;	// sortof an inset
    static final int yOffset = 5;
    
    private Image image;
    String name;
    
    public HoodText(String name) {
	super();
	this.name = name;
    }
    
    public void setContent(PrettyContentWidget pcw) {
	this.pcw = pcw;
	int maxX = 0;
	int maxY = 0;
	PrettyContentWidget w    = this.pcw;
	PrettyContentWidget prev = null;
	
	while (w != null) {
	    PrettyContentWidget next = w.next;
	    w.next = prev;
	    prev = w;
	    
	    if (w.x + w.txt.length() > maxX) {
		maxX = w.x + w.txt.length();
	    }
	    if (w.y + 1 > maxY) {
		maxY = w.y + 1;
	    }
	    w = next;
	}
	this.pcw = prev;
	maxY += 2; // space for title bars
	Message.message("maxX = " + maxX + " maxY = " + maxY);
	// Get the font metrics, so we know the size of our box.
	FontMetrics fm = getFontMetrics(fonts[1]);
	int fontWidth = fm.stringWidth(" ");
	int fontHeight = fm.getHeight();
	int fontDescent = fm.getDescent();

	areaPixWidth = xOffset * 2 + maxX * fontWidth;
	areaPixHeight = yOffset * 2 + maxY * fontHeight;	

	Message.message("maxX = " + areaPixWidth + " maxY = " + areaPixHeight);	
	image = createImage(areaPixWidth,areaPixHeight);

	Graphics g = image.getGraphics();
	g.setFont(fonts[1]);
	g.setColor(Color.lightGray);
	g.fillRect(xOffset,
		   yOffset + fontDescent,
		   areaPixWidth - (xOffset * 2),
		   fontHeight);

	g.fillRect(xOffset,
		   yOffset + fontDescent + (maxY - 1) * fontHeight,
		   areaPixWidth - (xOffset * 2),
		   fontHeight);

	g.setFont(fonts[1]);
	g.setColor(colors[0]);

	g.drawString("-- " + name,xOffset,fontHeight + yOffset);

	this.invalidate();
    }

    public void renderText(int time,Graphics g) {

	Message.message("renderText " + time );

	FontMetrics fm = getFontMetrics(fonts[1]);
	int fontWidth = fm.stringWidth(" ");
	int fontHeight = fm.getHeight();
	int fontDescent = fm.getDescent();

	g.setColor(Color.white);
	g.fillRect(xOffset,fontHeight+yOffset+fontDescent,
		   areaPixWidth-2*xOffset,
		   areaPixHeight-2*(fontHeight+yOffset));

	PrettyContentWidget widgets = this.pcw;
	while (widgets != null) {

	    int x = widgets.x * fontWidth + xOffset;
	    int y = (2 + widgets.y) * fontHeight + yOffset;
	    String text = widgets.txt;		
	    int fontNo = 1;
	    int colorNo = widgets.prop;
	    
	    g.setFont(fonts[fontNo]);
	    g.setColor(colors[colorNo]);
	    
	    if (time < widgets.birth) {
		// dont do anything.
	    } else if (time >= widgets.birth && time < widgets.death) {
		g.setColor(Color.white);
		if (time == widgets.birth) {
		    g.setColor(Color.yellow);
		}
		g.fillRect(x,y + fontDescent - fontHeight,
		   fontWidth * text.length(),
		   fontHeight);
		g.setColor(colors[colorNo]);
		g.drawString(text,x,y);
	    }
	    widgets = widgets.next;
	}
    }

    public Dimension getPreferredSize() {
	Message.message("get preferedSize");
	if (image == null) {
	    return new Dimension(1,1);
	} else {
	    return new Dimension(image.getWidth(this),
				 image.getHeight(this));
	}
    }


    public synchronized void setFontSize(int size) {
	if (fontName.equals("")) {
	    String[] theFonts = getToolkit().getFontList();
	    // We are looking for Courier *or* Monospaced.
	    for(int i = 0;i < theFonts.length; i++) {
		System.out.println("font" + theFonts[i]);
		if (theFonts[i].equals("Courier") ||
		    theFonts[i].equals("Monospaced")) {
		    fontName = theFonts[i];
		    break;
		}
	    }
	}
	System.out.println("Font => " + fontName);
	// If we've not found it, default to try monospaced,
	// which *is* the 1.1 standard.
	if (fontName.equals("")) {
	    fontName = "Monospaced";
	}
	fonts[0] = new Font(fontName, Font.PLAIN, size);
	fonts[1] = new Font(fontName, Font.BOLD, size);
	fonts[2] = new Font(fontName, Font.ITALIC, size);
	fonts[3] = new Font(fontName, Font.BOLD | Font.ITALIC, size);
	//	fonts[1] = fonts[0];

    }
    
    private int currStep = 0;
    private int dispStep = -1;

    public void setStep(int step) {
	Message.message("setting step to " + step);
	currStep = step;
	this.invalidate();
    }

    public void paint(Graphics g) {
	if (currStep != dispStep) {
	    dispStep = currStep;
	    Message.message("rendering " + dispStep);
	    renderText(dispStep,image.getGraphics());
	}
	g.drawImage(image,0,0,this);
    }
    public void update(Graphics g) {
	paint(g);
    }
}
