#include<iostream>
using namespace std;

class A
{

public:
   char name[10]="wsdasd";
   int z=30;
};
class B:public A
{
private:
    /* data */
public:
    int x=10;
    int fun()
    {
        cout<<"hello world"<<" "<<name;
    }

  
};
class C:public A
{
private:
    /* data */
public:
  int y =20;
  int funw(){
    cout<<"new world";
  }
};
class D:public B,public C
{
private:
    /* data */
public:
   int sum(){
    
    cout<<x+y;
   }
  
};

int main()
{
    D obj;
    obj.sum();
}


