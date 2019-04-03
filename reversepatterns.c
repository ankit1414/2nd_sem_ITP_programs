/*#include<stdio.h>
void main()
{   int i;
    for(i=0 ; i<6 ; ++i)
    {   int j=6-i;
        while(j>0)
        {   printf("*");
            --j;
        }
        printf("\n");
    }
}
*/
/*#include<stdio.h>
void main()
{   int i;
    for(i=0 ; i<6 ; ++i)
    {   int j=6-i;
        while(j>0)
        {   printf("%d",6-i);
            --j;
        }
        printf("\n");
    }
}
*/
#include<stdio.h>
void main()
{   int i;
    for(i=0 ; i<6 ; ++i)
    {   int j=1;
        while(j<7-i)
        {   printf("%d",j);
            ++j;
        }
        printf("\n");
    }
}

