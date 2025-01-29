#include <stdio.h>

int main()
{
  int num;                // declare a variable num to store an integer value for its factorial
  int f=1;                // declare a variable f(factorial) and initialize it to 1
  int i=0;                // declare a loop variable
  
  scanf("%d", &num);
  
 for(i=num;i>0;i--)        // a loop running backwards from the number and for each successive iterations, it gets decremented by 1
    f=f*i;
printf("%d",f);            // to print the factorial of a number
  
  return 0;
}
