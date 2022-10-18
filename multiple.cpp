#include<iostream>
using namespace std;

class derived
{
 protected:
 int salary=1000;
 public:
    void display()
    {
        cout<<"hello world";
    }
    
   
};
class derived1
{
    protected:
    int y=20;
    
    public:
    void display1()
    {
        cout<<"new ";
    }
   
};
class base: public derived ,public derived1 
{

public:
    void sum()
    {
        cout<<y+salary<<" "<<"\n";
    }
  
};
int main()
{
    base x;
    x.sum();
    x.display1();
    x.display();

    return 0;

}
