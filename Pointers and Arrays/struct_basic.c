#include <stdio.h>

struct student          // to declare structure
{
    char name[50];      // to store name 
    int age;            // to store age
};

int main()
{
  struct student s1, s2;    // declare structure variables
  
  printf("Enter student 1 details\n");      // Accepting student 1 details. name and age of the student
  printf("Name:\n");
  fgets(s1.name, sizeof(s1.name), stdin);
  
  printf("Age\n");
  scanf("%d", &s1.age);
  getchar();
  printf("\n");
  printf("Enter student 2 details\n");    // Accepting student 2 details. name and age of the student
  printf("Name:\n");
  fgets(s2.name, sizeof(s2.name), stdin);
  
  printf("Age\n");
  scanf("%d", &s2.age);
  getchar();
  printf("\n");
  
  printf("Student 1\n");                // To display record of student 1
  printf("Name: %s\n", s1.name);
  printf("Age: %d\n", s1.age);
  
  printf("\n");                         //To display record of student 1
  printf("Student 2\n");
  printf("Name: %s\n", s2.name);
  printf("Age: %d\n", s2.age);

    return 0;
}
