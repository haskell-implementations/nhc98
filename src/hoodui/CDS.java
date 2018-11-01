/*
 * Basic class for the "Concreate Data Structure" datatype.
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

public abstract class CDS implements PrettyStep {
    public int nodeId;    // The time this node got updated/created

    /* Adding a child to a specific node.
     */

    public abstract void addChild(CDS child,int portNo);

    /* trying to update *this* with a newChild
     * For WHNF object, this is an error
     * For Enter nodes, this is the update
     * For Fun nodes, this is just another instance.
     */

    protected abstract CDS adding(CDS newChild);

    /* build a single child, because sometimes 
     * you might want to wrap yourself in a Many
     */
    protected CDS singleton() {
	return this;
    }

    /* Adding the tag saying when you were entered.
     */
    protected abstract void addEnterId(int enterId);

    public void visitNodes(HoodVector nodes) {
	if (nodeId != -1) {
	    nodes.setElementAt(this,nodeId);
	}
    }

    public int getBirthId() { return nodeId; }

    protected abstract Pretty render(PrettyStep parent,int prec,boolean par);

    protected void getFn(PrettyStep ps,HoodColl ht,boolean isStatic) {
	// consider getFn using the parental step context
	ArgResList.singleton(render(ps,10,false),ht);
    }
}
