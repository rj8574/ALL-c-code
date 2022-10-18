#include<iostream>
using namespace std;


class state
{
private:
    
    int *p;
public:
    state();
    ~state();
};

state::state()
{
    p=new int[10];
    cout<<"Test created\n";
}

state::~state()
{
    delete[]p;
    cout<<"test destroyed\n";

}
class derived:public state
{
private:
    /* data */
     int *p;
public:
    derived(/* args */);
    ~derived();
};

derived::derived(/* args */)
{
     p=new int[10];
    cout<<"Test 1 created\n";
}

derived::~derived()
{
     delete[]p;
    cout<<"test 1 destroyed\n";
}

void fun()
{
    state *s=new state();
    delete s;
}

int main()
{
    //fun();
    state *p= new  derived();
   // delete p;
    //derived p;
    return 0;
}