#include <iostream>
using namespace std;
class base
{
public:
    int a = 10;
    void fun()
    {
        cout << "hello world"
             << "\n";
    }
};
class derived : public base
{
    public:
    int x = 20;
    void fi()
    {
        cout << "new world";
        cout << a;
        fun();
    }
};
int main()
{
    derived d;
    d.fun();
    d.fi();
    return 0;
}