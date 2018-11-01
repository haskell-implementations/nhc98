/*
 * Shadow text based operation for pretty printers
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

public class PrettyShadow extends Pretty {
    private String text;
    int prop;
    private int    startTime;  // inclusive
    private int    endTime;    // exclusive

    // There should never be \n or \t inside the string
    // However, this will just upset output, not cause
    // any fatalities.
    protected PrettyShadow(int startTime,int endTime,String text,int prop) {
	this.text = text;
	this.prop = prop;
	this.startTime = startTime;
	this.endTime   = endTime;
    }
    public void render(int indent,boolean flatten,PrettyContext pc) {
	pc.shadow(startTime,endTime,text,flatten,prop);
    }
    public String toString() {
	return ("shadow(\"" + text + "\")");
    } 
}
