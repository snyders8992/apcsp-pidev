#include <stdio.h>

struct Student
{
	char firstname[15];
	char lastname[15];
	int age;
	int studentid;
};

void printStudent(struct Student* student)
{
	printf(("The first name is %s\n"),student -> firstname);
	printf(("The last name is %s\n"), student -> lastname);
	printf(("The age is %d\n"), student -> age);
	printf(("The student ID is %d\n"), student -> studentid);
};

int main()
{
	char input[256];
	int num;
	printf("How many students do you want to input?\n");
	fgets (input, 256, stdin);
	sscanf(input, "%d", &num);
	struct Student studentArr[num];
	for (int i = 0; i < num; i++)
	{
		printf("What is your first name?\n");
		fgets(input, 256, stdin);
		sscanf(input, "%s\n", &studentArr[i].firstname);

		printf("What is your last name?\n");
		fgets(input, 256, stdin);
		sscanf(input, "%s\n", &studentArr[i].lastname);

		printf("What is your age?\n");
		fgets(input, 256, stdin);
		sscanf(input, "%d\n", &studentArr[i].age);

		printf("What is your student ID?\n");
		fgets(input, 256, stdin);
		sscanf(input, "%d\n", &studentArr[i].studentid);

	}
	for (int i = 0; i < num; i++)
	{
		printStudent(&studentArr[0]);
	}

}
