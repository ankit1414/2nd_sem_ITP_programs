//DEVELOPED BY: ANKIT BHARDWAJ
#include<stdio.h>
void main(){
    int n1,n2,n3,greatest;
    printf("ENTER THE THREE NUMBERS::\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    greatest=n1;
    if(greatest<n2)
        greatest=n2;
    if(greatest<n3)
        greatest=n3;
    printf("THE GREATEST OF THE THREE NUMBERS IS : %d\n",greatest);
    printf("\n\t\t\t\t\tANKIT(D-6)\n");

}
