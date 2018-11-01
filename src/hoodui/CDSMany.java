/*
 * Subclass for representing alternative versions at this point.
 *  Two ways to do this
 *    - Root nodes with many observations.
 *    - Function nodes
 *
 * Copyright 2000 Andy Gill
 *
 * $Revision: 1.1 $
 * $Date: 2000/09/15 16:14:17 $
 */

import java.util.*;
/**
  *
  * @author Andy Gill
  * @version 0.1
  */

public class CDSMany extends CDS {
    Vector many;

    public CDSMany(int nodeId) {
	this.nodeId = nodeId;
	many = new Vector();
    }

    public void addChild(CDS child,int portNo) {
	if (portNo != 0) {
	    Message.abort("connecting to non-existent port");
	}
	many.addElement(child);
    }

    /* trying to update *this* with a newChild
     */
    protected CDS adding(CDS newChild) {
	many.addElement(newChild);
	return this;
    }

    /* Adding the tag saying when you were entered.
     */
    protected void addEnterId(int enterId) { }

    public void visitNodes(HoodVector nodes) {
	Enumeration manys = many.elements();
	while(manys.hasMoreElements()) {
	    CDS node = (CDS) manys.nextElement();
	    node.visitNodes(nodes);
	}
    }

    public Pretty render(PrettyStep parent,int prec,boolean par) {
	HoodColl ht = HoodColl.collection(false);
	getFn(parent,ht,false);
	Enumeration manys = ht.elements();
	boolean first = true;
	boolean isFn = false;
	PrettyMany pm = Pretty.nil();
	pm._text(parent,"{ ",Pretty.SUGAR);
	while(manys.hasMoreElements()) {
	    if (!first) {
		pm._newline();
		if (isFn) {
		    pm._text(parent,"  ",Pretty.SUGAR);
		} else {
		    pm._text(parent,", ",Pretty.SUGAR);
		}
	    }
	    PrettyMany pelem = Pretty.nil();	    
	    ArgResList arl = (ArgResList) manys.nextElement();
	    Enumeration arls = arl.elements();
	    int shift = 2;
	    int elemCount = 0;
	    while(arls.hasMoreElements()) {
		Pretty p = (Pretty) arls.nextElement();
		elemCount++;
		if (arls.hasMoreElements()) {
		    isFn = true;
		    if (elemCount == 1) {
			if (first) {
			    pelem._text(parent,"let fn ",Pretty.SUGAR);
			} else {
			    pelem._text(parent,"    fn ",Pretty.SUGAR);
			}
			shift = 7;
		    } else {
			pelem._sep(parent);
		    }
		    pelem.add(p);
		} else {
		    if (elemCount == 1) {
			pelem.add(p);
		    } else {
			pelem._sep(parent);
			pelem._text(parent,"= ",Pretty.SUGAR);
			pelem.add(p);
		    }
		}
	    }
	    pm._group(parent,Pretty.nest(parent,shift,pelem));
	    if (first) {
		first = false;
	    }
	}
	pm._newline();
 	pm._text(parent,"}",Pretty.SUGAR);
	return Pretty.nest(parent,0,pm);
    }

    protected void getFn(PrettyStep parent,HoodColl target,boolean isStatic) {
	Enumeration manys = many.elements();
	while(manys.hasMoreElements()) {
	    CDS node = (CDS) manys.nextElement();
	    node.getFn(parent,target,isStatic);
	}
    }


    public String toString() {
	Enumeration manys = many.elements();
	boolean first = true;
	String txt = "{";
	while(manys.hasMoreElements()) {
	    if (first) {
		first = false;
	    } else {
		txt += ",";
	    }
	    CDS node = (CDS) manys.nextElement();
	    txt += node.toString();
	}
	txt += "}";
	return txt;
    }
}

