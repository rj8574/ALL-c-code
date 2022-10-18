#include<iostream>
using namespace std;

class base
{
 
public:
    float salary=9000.09;
    base()
    {
        cout<<salary<<"\n";
    }
   
};
class derived :base
{
public:
    float inc=1000.09;
    derived()
    {
        cout<<inc<<"\n";
    }
   
};
class derived1: public derived 
{

public:
    void sum(float y)
    {
        cout<<y<<"\n";
    }
  
};
int main()
{
    derived1 x;
    x.sum(10.234);
    return 0;

}




