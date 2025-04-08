#include <stdio.h>

int main()
{
    char str[50], ch;
    int count=0;
    
    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter the character to find its frequency\n");
    scanf("%c", &ch);
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(ch == str[i])
        {
            count++;
        }
    }

    printf("The frequency of the character %c =  %d", ch, count);
    return 0;
}
