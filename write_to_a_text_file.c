#include <stdio.h>
int main()
{
   char contenttofile[1000];
   FILE *fp;

   fp = fopen("datacollect.txt", "w");
   if(fp == NULL)
   {
      printf("Error!");
      return 0;
   }

   printf("Enter a content to be stored in the file :\n");
   gets(contenttofile);

   fprintf(fp,"%s", contenttofile);
   fclose(fp);
   printf("\n\t\t\t\t\tANKIT(D-6)\n");

   return 0;
}
