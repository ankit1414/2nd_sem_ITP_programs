//string palindrome
#include<stdio.h>
#include<string.h>
int main()
{   int i,flag=1;
    char str[40];
    printf("Enter the string::  ");
    scanf("%s",&str);
    int siz=strlen(str);
    for(i=0; i<siz/2; i++)
    {   if(str[i]!=str[siz-1-i])
        {   flag=0;
            break;
        }
    }
    if(flag==1)
        printf("%s is a PALNINDROME",str);
    else if(flag==0)
        printf("%s is NOT PALINDROME",str);
    return 0;

}

