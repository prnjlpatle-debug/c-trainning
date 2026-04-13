#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int rollno;
    int age;
};
int main()
{
    struct student s1;
    s1.age=6;
    strcpy(s1.name,"pranjal");
    printf("%d\n",s1.age);
    printf("%d\n",s1.name);
}