#include <stdio.h>

int fact(int n)
{
    int f=1;
    for(int i=n;i>0;i--)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int num;
    scanf("%d",&num);
    int dig, sum=0;
    int temp=num;
    while(num!=0)
    {
        dig=num%10;
        num/=10;
        sum+=fact(dig);
    }
    if(temp==sum)
        printf("Strong number\n");
    else
        printf("Not strong number\n");    
    return 0;
}
