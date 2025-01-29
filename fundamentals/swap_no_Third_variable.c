#include <stdio.h>

int main()
{
  int a,b;                    // declare two variables to store two integer values
  
  scanf("%d %d", &a, &b);
  
  a=a+b;                     // swap without using a third variable
  b=a-b;
  a=a-b;
  
  printf("%d %d", a, b);      // to print swapped values
  
  return 0;
}
