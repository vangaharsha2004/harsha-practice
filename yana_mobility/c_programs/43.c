#include <stdio.h>

struct student
{
    int roll_num;
    char name[50];
    float marks;
};

int main()
{
    struct student s[50];
    struct student temp;

    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter student details:\n");

    for(int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_num);

        printf("Enter student name: ");
        scanf("%49s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(s[i].roll_num > s[j].roll_num)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Student details after sorting by roll number:\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nRoll Number = %d\n", s[i].roll_num);
        printf("Name        = %s\n", s[i].name);
        printf("Marks       = %.2f\n", s[i].marks);
    }

    return 0;
}
