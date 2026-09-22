#include<stdio.h>

struct student{

	int roll_num;
	char name[50];
	float marks;
};

int main(){

	struct student s;

	printf("enter the student details:\n");

	printf("enter roll number : ");
	scanf("%d",&s.roll_num);

	printf("enter student name : ");
	scanf("%s",s.name);

	printf("enter marks : ");
	scanf("%f",&s.marks);

	printf("student details\n");

	printf("Roll Number = %d\n", s.roll_num);
    	printf("Name        = %s\n", s.name);
    	printf("Marks       = %.2f\n", s.marks);

    	return 0;
}
