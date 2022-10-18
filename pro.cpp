#include <iostream>
using namespace std;

class A
{
    int c = 30;

protected:
    int b = 20;

public:
    int a = 10;
};
class B : public A
{
    int x = 40;

protected:
    int y = 30 + a;

public:
    int z = 50;
    int fun()
    {
        cout << a + b;
    }
};
class C : public B
{
    int j = 100;

protected:
    int k = 30;

public:
    int l = 50;
    int sum()
    {
        cout << y + z + j << "\n";
    }
};
int main()
{
    C x;
    x.sum();
    x.fun();
    return 0;
}