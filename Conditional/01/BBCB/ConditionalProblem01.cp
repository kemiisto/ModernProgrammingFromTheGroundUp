MODULE ModernConditional01;

  IMPORT StdLog, In, Math;
  
  PROCEDURE Do*;
  VAR
    n, i: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(n);
    FOR i := 2 TO SHORT(ENTIER(Math.Sqrt(n))) DO
      IF n MOD i = 0 THEN
        StdLog.Int(i);
        StdLog.Int(n DIV i);
        StdLog.Ln;
      END;
    END;
  END Do;
  
END ModernConditional01.

(!)ModernConditional01.Do 20