#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("C:\\Users\\thakurri\\HelloWorld\\text.txt","w+");
    fprintf(fp,"this is the gggg\n",fp);
    fputs("this is the bbb\n",fp);


    fclose(fp);
    return 0;
}