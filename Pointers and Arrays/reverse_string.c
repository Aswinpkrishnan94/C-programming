#include<stdio.h>

int main()
{
    char str1[50], str2[50];           // declare two string variables 
    fgets(str1, sizeof(str1), stdin);  // accept the string to reverse it
    int i, j, len=0;
    while(str1[i++]!='\0')
    {
        len++;                          // calculate the length of the string
    }
    i=0;
    for(j=len-1, i=0;str1[i]!='\0';j--, i++)
        str2[i]=str1[j];                // store user input string in reverse form in a new variable
    
    for(i=0;i<len;i++)
     printf("%c", str2[i]);             //  to print the string
  
  return 0;
}
