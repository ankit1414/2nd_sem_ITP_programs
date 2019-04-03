//PROGRAM TO FIND THE ROOTS OF A QUADRATIC EQN USING USER DEFINED FUNCTION
//DEVELOPED BY: ANKIT BHARDWAJ
#include<stdio.h>
#include<math.h>
int main()
{	void roots(int,int,int);
	int a , b , c;
	a=b=c=0;
	printf("Standard form::::: ax^2+bx+c\n");
	printf("Enter the coefficients a , b , c respectively (with sign)\n");
	scanf("%d %d %d",&a,&b,&c);
	roots(a,b,c);
}
void roots(int a , int b , int c)
{
	int d=0;
	d=((b*b)-(4*a*c));
	printf("\nthe discriminent is:::::%d",d);
	if(d==0)
		printf("\nThe roots of the equation are::::%f and %f",(-b/(2*a)),(-b/(2*a)));
	else
	{	if(d>0)
			printf("\nThe roots of the equation are:::::%f and %f",((-b+sqrt(d))/(2*a)),((-b-sqrt(d))/(2*a)));
		if(d<0)
			printf("\nThe roots of the equation are:::::%f+%fi and %f-%fi",((-b)/(2.0*a)),(sqrt(-d)/(2*a)),((-b)/(2.0*a)),(sqrt(-d)/(2*a)));
    }
}
