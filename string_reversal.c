#include<stdio.h>
#include<string.h>
int main()
{   int i;
    char str1[30],str2[30];
    printf("Enter the string :: ");
    gets(str1);
    strcpy(str2,str1);
    int siz=strlen(str1);
    for(i=0; i<siz/2; ++i)
    {   char temp=str1[i];
        str1[i]=str1[siz-1-i];
        str1[siz-1-i]=temp;
    }
    printf("The string after reversal is : %s",str1);
    printf("\n\t\t\t\t\tANKIT(D-6)\n");
    return 0;

}
