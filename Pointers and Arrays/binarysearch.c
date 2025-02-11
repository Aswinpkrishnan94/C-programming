#include <stdio.h>

void sort(int a[10], int n)            // to sort array in ascending order
{
    int i,j, temp=0;
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
              temp = a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
    }
    
}

int binarysearch(int a[10], int l, int r, int x)
{
    int mid = 0;
    
    while(l<=r)
    {
        mid = l+(r-l)/2;          // compute mid point calculation
      
        for(int i=0;i<r;i++)
        {
            if(a[mid]==x)
                return mid;
            else if(a[mid]<x)
                return l=mid+1;
            else
                return r=mid-1;
        }
    }
    return -1;                    // element not found
}
int main()
{
    int n, a[10], i, len=0;
    int x;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter the array\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    printf("Enter the number to be searched\n");  
    scanf("%d",&x);
        
    sort(a, n);      // call to sort function
    
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    printf("\n");
        
    int val=binarysearch(a,0, n-1,x);    // call to search for number in the array
  
    if(val==-1)
        printf("element not found\n");
    else
        printf("element is at %d", val);
        
    return 0;
}
