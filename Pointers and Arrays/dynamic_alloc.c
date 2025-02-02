#include<stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n = 5, i;
  
    arr = (int*)malloc(n * sizeof(int));    // size of int is 4 bytes. This allocates 20 bytes of memory
  
    for (i = 0; i < n; i++) 
      *(arr+i)= i * 10;
  
    for (i = 0; i < n; i++) 
      printf("%d ", *(arr+i));              // to print stored array
  
free(arr);    // free allocated memory
  
return 0;
}
