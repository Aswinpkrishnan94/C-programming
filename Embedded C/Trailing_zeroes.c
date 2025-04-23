#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t num;
    int count=0;
    scanf("%u",&num);
    
    while(num!=0)
    {
        if(num&1)
        {
            break;      // if 1 is detected, stop execution
        }
        else
        {
            count++;    // count number of zeroes
        }
        num =num>>1;
    }
    
    printf("number of trailing zeroes = %d",count);
    return 0;
}
