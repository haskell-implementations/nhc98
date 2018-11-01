import Distribution.InstalledPackageInfo
import Distribution.Package
import Distribution.Parser
import Text.ParserCombinators.Poly
import Text.Parse
import System (getArgs)

main = do
    [file] <- getArgs
    content <- readFile file
    case runParser parse content of
        (Left err, _)   -> error err
        (Right (ipi::[InstalledPackageInfo]), []) -> putStrLn "finished"
     -- (Right ipi, rs) -> putStrLn ("stuff left unparsed:\n"++rs)
        (Right ipi, rs) -> mapM_ (putStrLn . pkgName . package) ipi
