/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i, j, temp=0;
    int a[50];
    
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    
    printf("Enter the array\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
        
    for(i=0;i<n;i++)                // to sort the array in ascending order
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
        printf("%d", a[i]);

    return 0;
}
