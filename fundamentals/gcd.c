#include <stdio.h>

int main()
{
    int n1, n2;
    int i, gcd=0;
    
    scanf("%d %d", &n1, &n2);    // accept two numbers from the user
    
    for(i=1;i<=n1 && i<=n2;i++)
    {
        if((n1%i==0)&&(n2%i==0))
        {
            gcd = i;
        }
    }
    
    printf("gcd is %d", gcd);
    return 0;
}
