#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int sum=0,sq, dig;
    
    sq = n*n;
    while(sq !=0)
    {
        dig=sq%10;
        sq/=10;
        sum+=dig;
    }
    if(sum == n)
        printf("True");
    else
        printf("False");
    return 0;
}
