
foo :: Bool -> ()
foo x = case x of {
        True  -> ();
        False -> ();
        }

main = print (foo True)
