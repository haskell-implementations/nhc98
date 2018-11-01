/*
 * Collection that can be a bag or set, but has a common interface.
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

public abstract class HoodColl {
    // Can act like a set or bag.

    public static HoodColl collection(boolean isSet) {
	if (isSet) {
	    return new HoodSet();
	} else {
	    return new HoodBag();
	}
    }

    public abstract Enumeration elements();
    public abstract void addElement(Object ele);
}
