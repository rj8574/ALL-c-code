#include<iostream>
using namespace std;

int main ()
{
    int var=5;
    int *p;
    p=&var;
    cout<<var<<" "<<*p;
}