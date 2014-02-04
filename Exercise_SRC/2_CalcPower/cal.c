#include <stdio.h>
int main()

{
  int a, b, c, d, count = 0;
  for(a = 0; a <= 3; a++)
    for(b = 0; b <= 9; b++)
      for(c = 0; c <= 9; c++)
        for(d = 0; d <= 9; d++)
          if((a + b + c + d)%4 == 0)
             count ++;
          else
             continue;
  printf("%d\n", count );
  return 0;

}
