#include<stdio.h>

int  *fun()
{
    int static y=10;
    return &y;
}
int main()
{
    int  *pc,c;
    c=22;

    pc=&c;
    printf("%d\n",pc);
    printf("%d\n",*pc);
    c=11;
     printf("%d\n",pc);
    printf("%d\n",*pc);
    *pc=2;
     printf("%d\n",&c);
    printf("%d\n",c);

    char *str;
    {
        char a='A';
        str=&a;

    }
    printf("%c",*str);
    int *p=fun();
    printf("%d",*p);

    return 0;
} 