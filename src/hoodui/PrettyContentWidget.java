/*
 * Indivdual text object in the text rendering sub-system.
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


class PrettyContentWidget {
    public int x;			// x-placement
    public int y;			// y-placement
    public String txt;			// The text
    public int prop;			// color
    public PrettyContentWidget next;	// This is a linked list.
    public PrettyContentWidget prec;	// Previous entry
    public int birth;			// before this, you are nothing.
    public int death;			// The day *after* you die

    PrettyContentWidget(int x,int y,String txt,int prop,
			int birth,int death) {
	this.x = x;
	this.y = y;
	this.txt = txt;
	this.prop = prop;
	this.birth = birth;
	this.death = death;
    }

}
