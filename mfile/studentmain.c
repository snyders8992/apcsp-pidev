#include <stdio.h>
#include <string.h>

int main()
{

  char input[256];
  struct Student student1;
  struct Student student2;

  strcpy(student1.first, "Stephanie");
  strcpy(student1.last, "Snyder");
  student1.age = 17;
  student1.studentid = 908992;

  printf("What is your first name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", student2.first);

  printf("What is your last name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", student2.last);

  printf("What is your age?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%d", &student2.age);

  printf("What is your StudentID?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%d", &student2.studentid);

  printStudent(&student1);
  printStudent(&student2);


  return 0;
}

