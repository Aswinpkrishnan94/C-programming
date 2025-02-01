#include<stdio.h>

int main()
{
  int x, *ptr;            // declare a pointer and variable to store integer value
  scanf("%d",&x);
  ptr = &x;              // address of the integer value is stored in a pointer variable 

  printf("Value of x is %d",*ptr);      // dereferencing a pointer variable
  return 0;
}
