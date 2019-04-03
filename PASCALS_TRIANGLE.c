//DEVELOPED BY: ANKIT BHARDAWAJ
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    int i,j,k,l;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
        for(l=i-1;l>=1;l--)
            printf("%d",l);
        printf("\n");
    }
    printf("\n\t\t\t\t\tANKIT(D-6)\n");
}
