/*
 * Subclass for representing roots of observations.
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

public class CDSRoot extends CDSCons {
    // There is no name for this CDS,
    // its a root, with one port (0).
    // Each observe creates one CDSRoot.

    CDSRoot(int nodeId) {
	super(nodeId,"root",1);
    }

    public void visitNodes(HoodVector nodes) {
	if (children[0] != null) {
	    children[0].visitNodes(nodes);
	}
    }

    public Pretty render(PrettyStep parent,int prec,boolean par) {
	children[0].render(parent,sa,time);
    }
}

