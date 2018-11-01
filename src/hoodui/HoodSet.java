/*
 * Set Collection.
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

class HoodSet extends HoodColl {
    Hashtable ht;
    static Integer commonObject = new Integer(99);

    public HoodSet() {
	ht = new Hashtable();
    }

    public Enumeration elements() {
	return ht.keys();
    }

    public void addElement(Object ele) {
	ht.put(ele,commonObject);
    }
}
