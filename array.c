#include<stdio.h>
int main()
{
    int arr1[2];
    printf("%d\n%d/n",arr1[-1],arr1[-2]);

      

    int arr[]={10,20,30,40};
    for(int i=0;i<4;i++)
    {
        printf("address arr[%d] is %p\n",i,&arr[i]);
    }

    return 0;
}