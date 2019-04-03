//opening a file in c lang
#include<stdio.h>
int main()
{   FILE *fp;
    char contentinfile[70];
    fp=fopen("/home/ankit/Desktop/testfile.txt","r");
    if(fp==NULL)
    {   printf("file not found.......");
        return 0;
    }
    while( fgets ( contentinfile, 70, fp ) != NULL )
    {
        printf("%s",contentinfile);

    }
    fclose(fp);
    return 0;
}
