#include <stdio.h>

int main()
{
    struct student
    {
        int rollno;
        char name[30];
        char sec[3];
        char dept[20];
        int total_marks;
    }student1, student2;
    printf("\n Enter the rollno:");
    scanf("%d %d", &student1.rollno, &student2.rollno);
    printf("\n Enter the name of both students:");
    scanf("%s %s", student1.name, student2.name);
    printf("\n Enter section:");
    scanf("%s %s", student1.sec, student2.sec);
    printf("\n Enter the department:");
    scanf("%s %s", student1.dept, student2.dept);
    printf("\n Enter the total total marks of both students:");
    scanf("%d %d", &student1.total_marks, &student2.total_marks);

    printf("Total marks = %d\n", student1.total_marks);
    printf("STUDENT 2 DETAILS :\n");
    printf("Roll No. = %d\n", student2.rollno);
    printf("Name = %s\n", student2.name);
    printf("Section = %s\n", student2.sec);
    printf("Department = %s\n", student2.dept);
    printf("Total marks = %d\n", student2.total_marks);

    if(student1.total_marks > student2.total_marks)
    {
        printf("Student 1 has got highest marks\n");
    }
    else
    {
        printf("\nStudent 2 has got highest marks");
    }
    return 0;
}
