//DEVELOPED BY: ANKIT BHARDWAJ
#include<stdio.h>
void main()
{
    int r,c;
    int arr1[20][20],arr2[20][20],arrsum[20][20];
    printf("\nEnter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("\nEnter the elements of 1st matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            scanf("%d",&arr1[i][j]);
    }
    printf("\nEnter the elements of 2nd matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            scanf("%d",&arr2[i][j]);
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            arrsum[i][j]=arr1[i][j]+arr2[i][j];
    }
    printf("\nSum matrix is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d ",arrsum[i][j]);
	printf("\n");
    }
    printf("\n\t\t\t\t\tANKIT(D-6)\n");

}
