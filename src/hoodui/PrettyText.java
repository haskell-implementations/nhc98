/*
 * Text based operation for pretty printers
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

public class PrettyText extends Pretty {
    private String text;
    private PrettyStep ps;
    int prop;
    // There should never be \n or \t inside the string
    // However, this will just upset output, not cause
    // any fatalities.
    protected PrettyText(PrettyStep ps,String text,int prop) {
	this.text = text;
	this.prop = prop;
	this.ps   = ps;
    }
    public void render(int indent,boolean flatten,PrettyContext pc) {
	pc.print(ps,text,flatten,prop);
    }
    public String toString() {
	return ("text(\"" + text + "\")");
    } 
}
