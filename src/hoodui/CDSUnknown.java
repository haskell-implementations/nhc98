/*
 * Node that has never been entered.
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

public class CDSUnknown extends CDS {
    public static CDSUnknown unknown = new CDSUnknown();

    CDSUnknown() {
	nodeId = -1;
    }

    public void addChild(CDS child,int portNo) {
	Message.abort("Unknown node has no children");
    }

    protected void addEnterId(int enterId) {
	Message.abort("Can't have entered something before this");
    }


    protected CDS adding(CDS newChild) {
	return newChild.singleton();
    }

    public Pretty render(PrettyStep parent,int prec,boolean par) {
	return Pretty.text(parent,unknownText,Pretty.UNEVAL);
    }

    public static String unknownText = "_";

    public String toString() {
	return unknownText;
    }
}


