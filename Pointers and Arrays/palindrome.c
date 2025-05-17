#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], temp[50];
    int i, len;

    printf("Enter the string:\n");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline character if present
    str1[strcspn(str1, "\n")] = '\0';

    strcpy(temp, str1);  // Store original

    len = strlen(str1);

    // Reverse the string
    for (i = 0; i < len; i++) {
        str2[i] = str1[len - 1 - i];
    }
    str2[len] = '\0';  // Null-terminate str2

    if (strcmp(str2, temp) == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
