import System

main =
  do
  system("exit 0") >>= printExitCode
  system("exit 1") >>= printExitCode
  system("exit 2") >>= printExitCode

printExitCode r = case r of
  ExitSuccess   -> print 0
  ExitFailure n -> print n
