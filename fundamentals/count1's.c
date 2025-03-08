#include <stdio.h>
#include<stdint.h>

int main()
{
 uint8_t num;
 scanf("%hhu", &num);      // to accept unsigned integer from the user
 int ctr=0;
 
 while(num!=0)
 {
  if(num&1)                // to check of LSB is 1 or not
    ctr++;
  num = num>>1;            // right shift operation
 }
 printf("Number of ones = %d", ctr);
    return 0;
}
