//DEVELOPED BY: ANKIT BHARDWAJ
#include<stdio.h>
void main(){
    int arr[20],n;
    printf("Enter the number of terms in Fibonacci series : ");
    scanf("%d",&n);
    printf("\n");
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++)
    arr[i]=arr[i-1]+arr[i-2];
    for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\n");
    printf("\n\t\t\t\t\tANKIT(D-6)\n");
}
