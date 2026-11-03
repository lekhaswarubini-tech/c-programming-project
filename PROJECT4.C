#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int roll;
int mark;
char city[20];
char dream[20];
};

void main()
{
int i;
struct student s[10];
clrscr();
for (i=0;i<10;i++)
{
printf("\nenter the student's name:%d\n",i+1);
printf("enter the student's name: ");
scanf("%s", s[i].name);
printf("enter the student's roll number: ");
scanf("%d", &s[i].roll);
printf("enter the student's mark: ");
scanf("%d", &s[i].mark);
printf("enter the student's city: ");
scanf("%s", s[i].city);
printf("enter the student's dream: ");
scanf("%s", s[i].dream);
}
printf("\n========== 10 student details===========\n");

for(i=0;i<10;i++)
{
printf("\nstudent:%d\n",i+1);
printf("\nname: %s\n", s[i].name);
printf("\nroll: %d\n", s[i].roll);
printf("\nmark: %d\n", s[i].mark);
printf("\ncity: %s\n", s[i].city);
printf("\ndream: %s\n", s[i].dream);
}
getch();
}
