/*
 * Bag Collection.
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

public class HoodBag extends HoodColl {
    Vector v;

    public HoodBag() {
	v = new Vector();
    }

    public Enumeration elements() {
	return v.elements();
    }

    public void addElement(Object ele) {
	v.addElement(ele);
    }
}
