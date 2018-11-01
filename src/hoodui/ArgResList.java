import java.util.*;

class ArgResList {
    Pretty p;
    ArgResList next;
    int theHash;

    static private final Integer myVoid = new Integer(314159);

    private ArgResList(Pretty p) {
	this.p = p;
	this.next = null;
	setHashCode(p,null);
    }
    private ArgResList(Pretty p,ArgResList next) {
	this.p = p;
	this.next = next;
	setHashCode(p,next);
    }

    public static void singleton(Pretty p,HoodColl ht) {
	ht.addElement(new ArgResList(p));
    }

    public Enumeration elements() {
	return new ArgResListEnumerator(this);
    }

    public int size() {
	ArgResList list = this;
	int count = 0;
	while (list != null) {
	    count++;
	    list = list.next;
	}
	return count;
    }

    // addArg p xss = [ p : xs | xs <- xss ]
    public static void addArgument(Pretty p,HoodColl ht,HoodColl tar) {
	Vector arl = new Vector();
	Enumeration hts = ht.elements();
	while (hts.hasMoreElements()) {
	    ArgResList ps = (ArgResList) hts.nextElement();
	    tar.addElement(new ArgResList(p,ps));
	}
    }

    public boolean equals(Object o) {
	if (hashCode() != o.hashCode()) {
	    return false;
	}
	if (!(o instanceof ArgResList)) {
	    return false;
	}
	ArgResList arl = (ArgResList) o;
	
	Enumeration e1 = elements();
	Enumeration e2 = arl.elements();
	while (e1.hasMoreElements()) {
	    if (!e2.hasMoreElements()) {
		// Different size
		return false;
	    }
	    Object o1 = e1.nextElement();
	    Object o2 = e2.nextElement();
	    if (o1 != null && o2 != null) {
		if (!o1.equals(o2)) {
		    return false;
		}
	    } else if (o1 == null || o2 == null) {
		// Either o1 is not null or o2 is not null
		// If they are both, then the above case would
		// capture
		return false;
	    } else {
		// Both o1 and o2 are null
		if (o1 != null || o2 != null) {
		    Message.abort("o1 or o2 is not null");
		}
	    }
	}
	if (e2.hasMoreElements()) {
	    return false;
	}
	return true;
    }

    protected void setHashCode(Pretty p,ArgResList next) {
	int hash = 0;
	if (p == null) {
	    hash = 123456;
	} else {
	    hash = p.hashCode();
	}
	if (next == null) {
	    hash ^= 847544;
	} else {
	    hash ^= next.hashCode();
	}
	theHash = hash;
    }
    
    public String toString() {
	String str = "";
	if (p == null) {
	    str += "?";
	} else {
	    str += p.toString();
	}
	if (next != null) {
	    str += "=> " + next.toString();
	}
	return str;
    }

    public int hashCode() {
	return theHash;
    }

}

final class ArgResListEnumerator implements Enumeration {
    ArgResList arl;
    ArgResListEnumerator(ArgResList arl) {
	this.arl = arl;
    }
    public boolean hasMoreElements() {
	return (arl != null);
    }
    public Object nextElement() {
	synchronized (arl) {
	    if (arl != null) {
		ArgResList localArl = arl;
		arl = arl.next;
		return localArl.p;
	    }
	}
	throw new NoSuchElementException("ArgResListEnumerator");
    }

}
