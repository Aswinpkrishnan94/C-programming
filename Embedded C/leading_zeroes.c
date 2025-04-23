#include <stdio.h>

#define INT_SIZE sizeof(int)*8
int main()
{
    int num;
    int ctr=0;
    int i=0;
    scanf("%d",&num);
    
    int msb = 1<<(INT_SIZE-1);
    
    for(i=0;i<INT_SIZE;i++)
    {
        if((num<<i)&msb)
            break;
        else
            ctr++;
    }
    printf("The count of leading zeros = %d",ctr);
    return 0;
}
