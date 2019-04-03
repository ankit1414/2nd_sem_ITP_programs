//DEVELOPED BY: ANKIT BHARDWAJ
#include<stdio.h>
void main(){
    int m,s=0,s1=1;
    printf("Enter the number of terms to display: ");
    scanf("%d",&m);
    printf("FIBONACCI SERIES::::\n");
    printf("%d\t%d\t",s,s1);
    for(int i=2;i<m;i++)
    {   int s2=0;
        s2=s1+s;
        printf("%d\t",s2);
        s=s1;
        s1=s2;
    }
printf("\n\t\t\t\t\tANKIT(D-6)\n");
}
