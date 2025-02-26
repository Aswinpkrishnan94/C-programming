#include <stdio.h>

int main()
{
   int temp, n;
   int dig, rev=0;
   
   scanf("%d", &n);                // accept a number from the user
   temp = n;
   
   while(temp!=0)
   {
       dig = temp%10;
       temp/=10;
       rev=(rev*10)+dig;            // reverse the digits
   }
   if(rev == n)                     // check if number_reversed = number
        printf("Palndrome");
   else
        printf("Not palindrome");
    
return 0;
}
