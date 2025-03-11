#include <stdio.h>
#include<stdint.h>

int main()
{
    unsigned char num;
    scanf("%hhu",&num);      // accept a number from the user
    
    if(num&1)                // check if LSB is 1 or not. if one, the number is ODD. Else the number is EVEN.
        printf("ODD\n");
    else
        printf("EVEN\n");
    
    return 0;
}
