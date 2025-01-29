#include <stdio.h>

int main()
{
  int a,b;                    // declare two variables to store two integer values
  int temp=0;                 // declare  a temporary value
  
  scanf("%d %d", &a, &b);
  
  temp=a;                     // swap using a third variable
  a=b;
  b=temp;
  
  printf("%d %d", a, b);      // to print swapped values
  
  return 0;
}
