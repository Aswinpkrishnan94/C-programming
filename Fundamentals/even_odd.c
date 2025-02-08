#include <stdio.h>

int main()
{
  int num;                // declare a variable num to store an integer value
  scanf("%d", &num);      // accept a number from the user to check if its odd or even
  
  if(num%2==0)            // Check if the number is divisible by 2 or not. if yes, it is even else it is odd
    printf("EVEN");
  else
    printf("ODD");
  
  return 0;
}
