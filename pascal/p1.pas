program p1;
var
  i: integer;
  sum: integer;

begin
  for i := 0 to 999 do
  begin
    if(i mod 3 = 0 or i mod 5 = 0) then
      sum := sum + i;
  end.
end.