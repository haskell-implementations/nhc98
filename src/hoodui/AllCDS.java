/*
 * Grand Central Station for our CDS root nodes.
 *
 * Copyright 2000 Andy Gill
 *
 * $Revision: 1.1 $
 * $Date: 2000/09/15 16:14:16 $
 */

import java.util.*;
/**
 * @version 0.1
 * @author Andy Gill
 */

public class AllCDS {
    private HoodTopLevel htl;

    /** mapping from Name(String) to CDS */
    private Hashtable cdsRoots = new Hashtable();

    /** mapping from Id(Int) to CDS */
    private Hashtable nodes = new Hashtable();

    AllCDS(HoodTopLevel htl) {
	this.htl = htl;
	resetNodes();
    }

    public void resetNodes() {
	cdsRoots = new Hashtable();
	nodes = new Hashtable();
    }

    // We presume that strings are already intern'ed,
    // allowing cmp with == and !=.

    // Adds an observe node, which augments a new element
    // to the root node associated with 
    public void addObserveNode(int nodeId,String text) {
	CDS set = (CDS) cdsRoots.get(text);
	if (set == null) {
	    // Hey, we've got a new observe point
	    set = new CDSMany(nodeId);
	    cdsRoots.put(text,set);
	    htl.newRootSet(text);
	}
	// Add to our master list of nodes
	nodes.put(new Integer(nodeId),set);
	htl.newNode();
    }
    
    public void addFunNode(int nodeId,int parentNodeId,int parentPort) {
	CDS parent = (CDS) nodes.get(new Integer(parentNodeId));
	if (parent == null) {
	    Message.abort("Can't find parent node");
	}
	CDS node = new CDSFun(nodeId);
	parent.addChild(node,parentPort);
	// Add to our master list of nodes
	nodes.put(new Integer(nodeId),node);
	htl.newNode();
    }


    public void addEnterNode(int nodeId,int parentNodeId,int parentPort) {
	CDS parent = (CDS) nodes.get(new Integer(parentNodeId));
	if (parent == null) {
	    Message.abort("Can't find parent node");
	}
	CDS node = new CDSEnter(nodeId);
	parent.addChild(node,parentPort);
	// Add to our master list of nodes
	nodes.put(new Integer(nodeId),node);
	htl.newNode();
    }

    public void addConsNode(int nodeId
			    ,int parentNodeId
			    ,int parentPort
			    ,int ports
			    ,String consName) {
	CDS parent = (CDS) nodes.get(new Integer(parentNodeId));
	if (parent == null) {
	    Message.abort("Can't find parent node");
	}
	CDS node = new CDSCons(nodeId,consName,ports);
	parent.addChild(node,parentPort);
	// Add to our master list of nodes
	nodes.put(new Integer(nodeId),node);
	htl.newNode();
    }

    /**
     * This looks up the collection, and gets the *first* node
     * of a collection.
     */

    public CDS getContents(String key) {
	CDS set = (CDS) cdsRoots.get(key);
	return set;
    }

}
