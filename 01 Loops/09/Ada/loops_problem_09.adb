with Ada.Integer_Text_IO;

procedure Loops_Problem_09 is
  N, Sum : Integer;
begin
  Ada.Integer_Text_IO.Get(N);

  Sum := 0;
  for I in 1 .. N loop
    Sum := Sum + (2 * i - 1);
  end loop;

  Ada.Integer_Text_IO.Put(Sum);
end Loops_Problem_09;
