//DEVELOPED BY: ANKIT BHARDWAJ
#include<stdio.h>
#include<stdlib.h>

void main()
{
	float a,b,d;
	char c;
	printf("\n Enter the expression: ");
	scanf("%f %c %f",&a,&c,&b);
	switch (c)
	{
		case '+': d = a + b; break;
		case '-': d = a - b; break;
		case '*': d = a * b; break;
		case '/': d = a / b; break;
		default:  printf("\n Wrong Operator."); exit(0);
	}
	printf("\n %f %c %f = %f",a,c,b,d);
	printf("\n\t\t\t\t\tANKIT(D-6)\n");
}
