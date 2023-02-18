// C program to implement structure

#include<stdio.h>
struct student
{
    int roll_no;
    char Name[20];
};
void main()
{
    struct student s;
    printf("Enter a name of student\n");
    scanf("%s",s.Name);
    printf("Enter a Roll number of student\n");
    scanf("%d",&s.roll_no);
    printf("Name = %s\nRoll number = %d",s.Name,s.roll_no);
}
