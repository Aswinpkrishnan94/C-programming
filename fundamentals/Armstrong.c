#include <stdio.h>
#include <math.h>

int order(int s)           // to find number of digits
{
  int cnt=0, digit=0;      // counter variable
  while(s!=0)
  {
    digit = s%10;
    s/=10;
    if(digit)
        cnt++;
  }
  return cnt;              // number of digits
}

int main()
{
    int dig, r = 0; 
    int temp, n;
    
    printf("Enter the number\n");
    scanf("%d",&n);

    temp =n;          // copy value into a temporary variable
    int s = order(temp);      // find order of the number

  while(temp!=0)
    {
        dig = temp%10;    // extract last digit
        temp/=10;
      
        r+=pow(dig,s);
    }

    if(r==n)
        printf("armstrong");
    else
    
        printf("not armstrong");
    return 0;
}
