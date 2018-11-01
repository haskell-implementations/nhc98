/*
 * Newline operation for pretty printers
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

public class PrettyNL extends Pretty {
    public static final int ALWAYS_NEWLINE    = 0;	// always "\n"
    public static final int SEP               = 1;	// " " or "\n"
    public static final int BRK               = 2;      // "" or "\n"
    private int state;
    private PrettyStep ps;

    protected PrettyNL(int state) {
	this(null,state);
    }
    protected PrettyNL(PrettyStep ps,int state) {
	this.ps    = ps;
	this.state = state;
    }

    public void render(int indent,boolean flatten,PrettyContext pc) {
	if (flatten) {
	    switch (state) {
	    case ALWAYS_NEWLINE:
		pc.popHandler();
		break;
	    case SEP:
		pc.print(ps," ",flatten,Pretty.SUGAR);
		break;
	    case BRK:
		break;
	    }
	} else {
	    pc.newline(indent);
	}
    }

    public String toString() {
	switch (state) {
	case ALWAYS_NEWLINE:
	    return "newline";
	case SEP:
	    return "sep";
	case BRK:
	    return "brk";
	}
	return "<PrettyNL>";
    }

}
