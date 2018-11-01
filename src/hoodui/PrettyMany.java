/*
 * Collection of pretty objects
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

public class PrettyMany extends Pretty {
    Vector many;
    protected PrettyMany(Vector many) {
	this.many = many;
    }

    public final void add(Pretty p) {
	many.addElement(p);
    }

    public final void _nest(PrettyStep ps,int i,Pretty p) {
	add(nest(ps,i,p));
    }

    public final void _group(PrettyStep ps,Pretty p) {
	add(group(ps,p));
    }

    public final void _newline() {
	add(newline());
    }

    public final void _sep(PrettyStep ps) {
	add(sep(ps));
    }

    public final void _brk() {
	add(brk());
    }

    public final void _text(PrettyStep ps,String text,int prop) {
	add(text(ps,text,prop));
    }
    public final void _shadow(int b,int d,String text,int prop) {
	add(shadow(b,d,text,prop));
    }

    public void render(int indent,boolean flatten,PrettyContext pc) {
	int i = many.size() - 1;
	for (;i >= 0;i--) {
	    Pretty d = (Pretty) many.elementAt(i);
	    pc.pushNextCommand(new PrettyCommand(d,indent,flatten));
	}
    }

    public String toString() {
	String txt = "many(";
	Enumeration ps = many.elements();
	while(ps.hasMoreElements()) {
	    Pretty p = (Pretty) ps.nextElement();	
	    txt += p.toString();
	    if (ps.hasMoreElements()) {
		txt += ",";
	    }
	}
	txt += ")";
	return txt;
    }
}
