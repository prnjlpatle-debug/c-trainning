#include<stdio.h>
#include<string.h>
struct Addresss
{
    int pincode;
};
struct student
{
    char name[50];
    int rollno;
    int age;
    struct Addresss s2;
    
};
int main()
{
    struct student s1;
    s1.age=6;
    s1.s2.pincode=481105;
    strcpy(s1.name,"pranjal");
    printf("%d\n",s1.age);
    printf("%s\n",s1.name);
    printf("%d\n",s1.s2.pincode);
}