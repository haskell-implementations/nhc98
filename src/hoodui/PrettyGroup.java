/*
 * Nesting operation for pretty printers
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

public class PrettyGroup extends Pretty {
    Pretty p;
    protected PrettyGroup(Pretty p) {
	this.p = p; 
    }
    /*
    public void render(PrettyContext pc) throws PrettyException {
	PrettyContextReader r = pc.getReader();
	int nestDepth = pc.column + i;
	PrettyContext pcSave = new PrettyContext(pc);
	switch(r.state) {
	case PrettyContextReader.ONE_LINE_NOHANDLE:
	    try {
		PrettyContextReader newR
		    = new PrettyContextReader(nestDepth,PrettyContextReader.ONE_LINE_HANDLE);
		pc.putReader(newR);
		p.render(pc);
	    } catch (PrettyException pe) {
		Message.message("caught pp");
		pc.restore(pcSave);
		PrettyContextReader newR
		    = new PrettyContextReader(nestDepth,PrettyContextReader.MULTI_LINE);
		pc.putReader(newR);
		p.render(pc);
	    }
	    break;
	case PrettyContextReader.ONE_LINE_HANDLE:  // Intended
	case PrettyContextReader.MULTI_LINE:
	    PrettyContextReader newR
		= new PrettyContextReader(nestDepth,r.state);
	    pc.putReader(newR);
	    p.render(pc);
	    break;
	}
	pc.putReader(r);
    }
    */
    public void render(int indent,boolean flatten,PrettyContext pc) {
	pc.pushNextCommand(new PrettyCommand(p,indent,true));
	if (!flatten) {
	    pc.pushHandler();
	}
    }

    public String toString() {
	return ("group(" + p.toString() + ")");
    } 
}
