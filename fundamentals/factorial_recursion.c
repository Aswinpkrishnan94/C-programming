#include <stdio.h>

int factorial(int n)
{
    return (n==0)? 1: n*factorial(n-1);      // factorial of zero is 1. the function factorial is called itself (recursion)
}

int main()
{
  int num;                // declare a variable num to store an integer value for its factorial
 
 scanf("%d",&num);
  
 printf("factorial of %d is %d ", num, factorial(num));    // to print the factorial of a number
  
  return 0;
}
