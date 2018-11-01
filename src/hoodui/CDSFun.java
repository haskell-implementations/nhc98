/*
 * Subclass for representing specific function instances.
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

public class CDSFun extends CDSCons {
    CDSFun(int nodeId) {
	super(nodeId,"->",2);
    }

    protected CDS singleton() {
	CDSMany many = new CDSMany(-1);
	many.adding(this);
	return many;
    }

    public void visitNodes(HoodVector nodes) {
	children[0].visitNodes(nodes);
	children[1].visitNodes(nodes);
    }

    protected void getFn(PrettyStep ps,HoodColl target,boolean isStatic) {
	HoodColl ht = HoodColl.collection(isStatic);
	children[1].getFn(ps,ht,isStatic);
	ArgResList.addArgument(children[0].render(ps,10,false),
			       ht,
			       target);
    }
}
