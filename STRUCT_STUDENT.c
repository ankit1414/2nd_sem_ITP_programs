#include<stdio.h>
#include<string.h>
struct student   {
                    char name[15];
                    int rollno;
                    long tel;
                }td[2];
int main()
{   for(int i=0; i<2; i++)
    {   printf("\nenter the name of student:%d :::: ",i+1);
        scanf("%s",&td[i].name);
        fflush(stdin);
        printf("\nenter the roll number of student:%d :::: ",i+1);
        scanf("%d",&td[i].rollno);
        fflush(stdin);
        printf("\nenter the telephone number of the student:%d :::: ",i+1);
        scanf("%ld",&td[i].tel);
        printf("\n--------------------------------------------------------------------------------\n");
    }

    printf("\n*****************************DISPLAYING DATA************************************\n");
    for(int i=0; i<2; i++)
    {   printf("\nThe name of student: %d ::",i+1);
        printf("%s",td[i].name);
        printf("\nThe roll number of student: %d :: %d",i+1,td[i].rollno);
        printf("\nThe telephone number of the student: %d :: %ld",i+1,td[i].tel);
        printf("\n--------------------------------------------------------------------------------\n");

    }
    printf("\n\t\t\t\t\tANKIT(D-6)\n");
    return 0;
}

