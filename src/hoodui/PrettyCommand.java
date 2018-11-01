/*
 * Utility class used by pretty printer
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
class PrettyCommand {
    public Pretty document;
    public int indent;
    public boolean flattened;
    public PrettyCommand next;

    public PrettyCommand(Pretty d,int i,boolean f) {
	document = d;
	indent   = i;
	flattened = f;
    }

    public void render(PrettyContext pc) {
	document.render(indent,flattened,pc);
    }
}
