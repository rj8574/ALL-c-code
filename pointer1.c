#include<stdio.h>

struct point
{
    /* data */
    int x,y;
};

int main()
{
    struct point arr[10];

    arr[0].x=10;
    arr[0].y=20;

    printf("%d %d",arr[0].x,arr[0].y);

    return 0;
    
}