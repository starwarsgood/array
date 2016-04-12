program ABC;

const
  N = 5;
  M = 3;

var
  a: array[1..N] of array[1..M] of Integer;
  i, j, d, k, p, sumtmp: Integer;
  s: array[1..M] of Integer;

begin
  randomize;
  for i := 1 to N do
  begin
    for j := 1 to M do
    begin
      a[i][j] := random(10);
      write(a[i][j]);
    end;
    writeln;
  end;  
    { Ñóììà }
  d := 1;
  s[d] := 0;
  for k := 1 to N do
  begin
    for p := 1 to M do
    begin
      sumtmp := a[k][p]; 
      s[d] := s[d] + sumtmp;
    end;
    writeln(s[d]);
    if (d <> M)
        then
      d := d + 1;
  end; 
end.