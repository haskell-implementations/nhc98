/*
 * Node that has been entered, but no reduced to WHNF.
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

public class CDSEnter extends CDS {
    CDSEnter(int enterId) {
	this.nodeId = enterId;
    }

    public void addChild(CDS child,int portNo) {
	Message.abort("Enter nodes have no children");
    }

    protected CDS adding(CDS newChild) {
	newChild.addEnterId(nodeId);
	return newChild.singleton();
    }

    protected void addEnterId(int enterId) {
	Message.abort("Entering the same node twice (Black hole??)");
    }

    public Pretty render(PrettyStep parent,int prec,boolean par) {
	return Pretty.text(parent,enteredText,Pretty.UNEVAL);
    }

    public static String enteredText = "?";

    public String toString() {
	return enteredText;
    }
}


