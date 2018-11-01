/*
 * Rendering Pretty into a basic String.
 *
 * Copyright 2000 Andy Gill
 *
 * $Revision: 1.1 $
 * $Date: 2000/09/15 16:14:17 $
 */

/**
 * @version 0.1
 * @author Andy Gill
 */


public class PrettyDisplayText implements PrettyDisplay {
    private String txt;
    int x;
    int y;

    public PrettyDisplayText() {
	txt = "";
	x = 0;
	y = 0;
    }

    public void setContent(PrettyContentWidget pcw) {
	PrettyContentWidget w = pcw;
	PrettyContentWidget last = null;
	while (w != null) {
	    Message.message("setContentA " + w.txt +
			    " " + w.x +
			    " " + w.y +
			    " " + w.birth +
			    " " + w.death);
	    last = w;
	    w = w.next;
	}
	w = last;
	while (w != null) {
	    Message.message("setContentB " + w.txt +
			    " " + w.x +
			    " " + w.y +
			    " " + w.birth +
			    " " + w.death);
	    if (w.death == Integer.MAX_VALUE) {
		while (w.y > y) {
		    txt += "\n";
		    x=0;
		    y++;
		}
		while (w.x > x) {
		    txt += " ";
		    x++;
		}
		txt += w.txt;
		x += w.txt.length();
	    }
	    w = w.prec;
	}
    }
    public String toString() {
	return txt;
    }

}


