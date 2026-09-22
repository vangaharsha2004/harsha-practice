#include<stdio.h>

struct student{
        
        int roll_num;
        char name[50];
        float marks;
};       

int main(){
        
        struct student s;
	struct student *ptr;
        
	ptr = &s;
        printf("enter the student details:\n");
        
        printf("enter roll number : ");
        scanf("%d",&ptr->roll_num);
        
        printf("enter student name : ");
        scanf("%s",ptr->name);
        
        printf("enter marks : ");
        scanf("%f",&ptr->marks);
        
        printf("student details\n");
        
        printf("Roll Number = %d\n", ptr->roll_num);
        printf("Name        = %s\n", ptr->name);
        printf("Marks       = %.2f\n", ptr->marks);

        return 0;
}

