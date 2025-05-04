#include <stdio.h>

int main()
{
    int num;
    int i, sum=0;
    scanf("%d",&num);
    int temp=num;
    for(i=1;i<num;i++)
    {
        if(num%i==0){
            sum+=i;
            printf("%d",i);}
        else
            continue;
    }
    if(sum==temp)
        printf("Perfect\n");
    else
        printf("Not perfect\n");

    return 0;
}
