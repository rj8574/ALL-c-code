#include<iostream>
using namespace std;
class OverLoad{
    private:
    int a,b;
    public:
    OverLoad():a(0),b(0){}
    void in()
    {
        cin>>a;
        cin>>b;
    }
    void operator-- ()
    {
        a=--a;
        b=--b;
    }
    void operator++ ()
    {
        a=a*a;
        b=b*b;

    }
    void out(){
        cout<<"Decrement"<<a<<" "<<b;
    }
};
int main()
{
    OverLoad ob;
    ob.in();
    --ob;
    ++ob;
    ob.out();

    return 0;

}