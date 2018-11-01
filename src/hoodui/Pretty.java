/*
 * Base class of pretty objects
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

public abstract class Pretty {
    public static final int NORMAL  = 0;	// others
    public static final int SUGAR   = 1;	// ( ... ) { ... }
    public static final int CONS    = 2;	// :, Cons, Foo
    public static final int PRIM    = 3;	// 1, 1.0, (), etc
    public static final int UNEVAL  = 4;	//
    public int enterId;
    public int nodeId;

    public static final Pretty nest(PrettyStep ps,int i,Pretty p) {
	return new PrettyNest(i,p);
    }
    public static final Pretty group(PrettyStep ps,Pretty p) {
	return new PrettyGroup(p);
    }
    public static final Pretty newline() {
	return new PrettyNL(PrettyNL.ALWAYS_NEWLINE);
    }
    public static final Pretty sep(PrettyStep ps) {
	return new PrettyNL(ps,PrettyNL.SEP);
    }
    public static final Pretty brk() {
	return new PrettyNL(PrettyNL.BRK);
    }

    public static final Pretty text(PrettyStep ps,String text,int prop) {
	return new PrettyText(ps,text,prop);
    }
    // Version of text that does not take up space
    public static final Pretty shadow(int b,int d,String text,int prop) {
	return new PrettyShadow(b,d,text,prop);
    }


    public static final Pretty many(PrettyStep ps,Vector many) {
	return new PrettyMany(many);
    }


    public static final Pretty many(PrettyStep ps,Pretty p1,Pretty p2) {
	Vector many = new Vector();
	many.addElement(p1);
	many.addElement(p2);
	return new PrettyMany(many);
    }
    public static final Pretty many(PrettyStep ps,
				    Pretty p1,Pretty p2,Pretty p3) {
	Vector many = new Vector();
	many.addElement(p1);
	many.addElement(p2);
	many.addElement(p3);
	return new PrettyMany(many);
    }
    public static final PrettyMany nil() {
	return new PrettyMany(new Vector());
    }

    public static Pretty paren(PrettyStep ps,boolean needParen,Pretty p) {
	if (needParen) {
	    PrettyMany p2 = Pretty.nil();
	    p2._text(ps,"(",Pretty.SUGAR);
	    p2.add(p);
	    p2._brk();
	    p2._text(ps,")",Pretty.SUGAR);
	    return Pretty.group(ps,Pretty.nest(ps,0,p2));
	} else {
	    return Pretty.group(ps,p);
	}
    }

    public void best(int maxColumn,PrettyDisplay pd) {
	PrettyCommand start = new PrettyCommand(this,0,false);
	PrettyContext pc = new PrettyContext(maxColumn,start);
	PrettyCommand next = pc.getNextCommand();
	while(next != null) {
	    next.render(pc);
	    next = pc.getNextCommand();
	}
	pc.setWidgets(pd);
    }

    public abstract void render(int indent,boolean flatten,PrettyContext pc);
}
