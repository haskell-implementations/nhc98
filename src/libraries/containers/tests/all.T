# This is a test script for use with GHC's testsuite framework, see
# http://darcs.haskell.org/testsuite

test('datamap001', normal, compile_and_run, ['-package containers'])
test('dataintset001', normal, compile_and_run, ['-package containers'])
test('sequence001', normal, compile_and_run, ['-package containers'])
