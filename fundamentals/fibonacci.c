#include <stdio.h>

int main()
{
int first, second, third=0;
int n;
printf("Enter the limit\n");
scanf("%d",&n);

first=0;
second=1;
printf("%d\t%d\t",first, second);
  
for(int i=0;i<n;i++)
{
    third = first +second;
    printf("%d\t", third);
    first=second;
    second=third;
}
  return 0;
}
