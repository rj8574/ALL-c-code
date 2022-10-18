#include<stdio.h>

struct point
{
    /* data */
    int x,y;
};


int main()
{
    struct point p2={10,20};
    struct point *p1 =&p2;

    printf("%d %d",p1->x , p1->y);

    return 0;
    
}