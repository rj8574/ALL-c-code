#include<iostream>
using namespace std;
 class A{
    friend class B;
    int a;
    public:
    int f(){ }  
 };

  class B{
    public:
    int numa;
    friend int A::f();
    B(){
        numa=10;
        cout<<"hello";
    }
 };
 class C:public B{
    void f(A*p){
        cout<<p;
    }
 };
 int main(){
     
     B x;
     cout<<x.numa;
     C m;

    // x.f();
    return 0;
 }