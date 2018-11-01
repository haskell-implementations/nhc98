/*
 * Vector with better representation for sparce arrays.
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

class HoodVector {
    Hashtable ht;

    public HoodVector() {
	ht = new Hashtable();
    }
   
    // Think: "Big Array"
    public void setElementAt(Object object,int index) {
	ht.put(new Integer(index),object);
    }

    public Object elementAt(int index) {
	return ht.get(new Integer(index));
    }

    // Think: "Compressed Array"
    // This is a *sorted* list of indices

    public int[] indexes() {
	int sz = ht.size();
	int arr[] = new int[sz];
	int i = 0;
	Enumeration keys = ht.keys();
	while(keys.hasMoreElements()) {
	    Integer integer = (Integer) keys.nextElement();
	    int val = integer.intValue();
	    arr[i++] = val;
	}
	Message.message("sorting...");
	quicksort(arr,0,arr.length-1);
	Message.message("sorted!");
	return arr;
    }

    public static void swap (int A[], int x, int y)
    {
	int temp = A[x];
	A[x] = A[y];
	A[y] = temp;
    }
    
    public static int partition(int A[], int f, int l)
    {
	if (f < l) {
	    int pivot = A[(f + l) / 2];
	    do	{
		while (A[f] < pivot) f++;
		while (A[l] > pivot) l--;
		swap (A, f, l);
	    } while (f < l);
	}
	return f;
    }
    
    public static void quicksort(int A[], int f, int l)
    {
	if (f >= l) return;
	int pivot_index = partition(A, f, l);
	quicksort(A, f, pivot_index);
	quicksort(A, pivot_index+1, l);
    }

    //------------------------------------------------
}
