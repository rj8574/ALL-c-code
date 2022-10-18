#include<iostream>
using namespace  std;


int fun( int f)
{
    //cout<<f<<"\n";
    return f;

}
void fun(float f)
{
    cout<<f*f<<"\n";

} 
void fun(int n,double m)
{
    cout<<n*m<<"\n";
}
int add(int a){
    int b=10;               
    return a+b;
}
int add(int a,int b=10)
{
    //cout<<b;
    return a+b;
}
int main()
{
    // fun(5);
    // fun(5);
    // cout<<"\n";
    // fun(8.89f);
    // fun(2,4.6);
    int a=10,b=20;
   cout<< add(a,b);
    return 0;
}