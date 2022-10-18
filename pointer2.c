#include<stdio.h>

struct address
{
    /* data */
    char city[10];
    int pin;
    char phone[14];
};

struct employee
{
    /* data */
    char name[20];
    struct address add;
};
void display(struct employee);




void main()
{
    struct employee emp;
    scanf("%s %s %d %s",emp.name,emp.add.city,&emp.add.pin,emp.add.phone);
    display(emp);


}
void display(struct employee emp)
{
    printf("%s %s %d %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);
}