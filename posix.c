#include<pthread.h>
#include<stdio.h>

void* threadfunction(void* arg)
{
  printf("Hello from Thread");
return NULL;
}

int main()
{
  pthread_t thread;
pthread_create(&thread, NULL, &threadfunction, NULL);
pthread_join(thread, NULL);
return 0;
}
