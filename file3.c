#include<stdio.h>
int main()
{
    FILE *fp,*fp1;
    char c;
    fp=fopen("text.txt","r");
    if(fp==NULL)
     printf("\nfile");
    while (1)
    {
        /* code */
        c=fgetc(fp);
        if(c==EOF)
        {
            break;
        }
        printf("%c",c);
    }
    fclose(fp);
    return 0;

}