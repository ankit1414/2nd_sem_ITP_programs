//DEVELOPED BY: ANKIT BHARDWAJ
#include<stdio.h>
void main(){
    for(int i=5;i>=1;i--){
        for(int j=1;j<=5-i;j++)
            printf(" ");
        for(int x=1;x<=i;x++)
            printf("%d",x);
        int k=i-1;
        while(k!=0){
            printf("%d",k);
            k--;
        }
        printf("\n");
    }
    printf("\n\t\t\t\t\tANKIT(D-6)\n");
}
