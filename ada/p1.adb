with Ada.Text_IO;
use Ada.Text_IO;
declare
  S : Integer := 0;
begin
  for I in Integer range 1 .. 999 loop
    if I mod 3 = 0 or I mod 5 = 0 then
      S := S + I;
    end if;
  end loop;
  Ada.Text_IO.Put_Line(S);
end;
l