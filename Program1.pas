program mat;
    const
      N=5;
      M=3;  
var
  a:array[1..N] of array[1..M] of Integer;
  i,j:Integer;
begin
randomize;
  for i:=1 to N do
    begin
      for j:=1 to M do
        begin
         a[i][j]:=random(10);
         write(a[i][j]);
        end;
        writeln;
    end;    
end.
  
