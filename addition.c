#include<stdio.h>
int addition()
 {
    int a,b;
    scanf("%d %d",&a,&b);
    return a+b;
 }
 int fun()
 {
    int a,b;
     scanf("%d %d",&a,&b);
    return a-b;

 }
 int f()
 {
    int s=19;
    return s;
 }
 int main()
 {
    int r;
    int (*ptr)();
    ptr=&addition;
    r=(*ptr)();
    printf("%d\n",r);

    int result;
    ptr=&fun;
    result=(*ptr)();
    printf("%d\n",result);

    ptr=&f;
    result=(*ptr)();
    printf("%d",result);

 }
 