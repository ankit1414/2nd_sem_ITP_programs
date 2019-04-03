//DEVELOPED BY: ANKIT BHARDWAJ
#include<stdio.h>
#include<math.h>
void main(){
    int a,r,n;
    printf("Enter the first term     : ");
    scanf("%d",&a);
    printf("Enter the common ratio   : ");
    scanf("%d",&r);
    printf("Enter The Number of terms: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int temp=a*pow(r,i);
        printf("%d\t",temp);
    }
    printf("\n\t\t\t\t\tANKIT(D-6)\n");
}
