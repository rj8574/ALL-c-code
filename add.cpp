#include <iostream>
using namespace std;

namespace addi
{
    int x;
    int y;
    int val(int x, int y) { return x + y; }
}
namespace sub
{
    int x = 90;
    int y = 20;
    int val() { return x - y; }
}
namespace mul
{
    int x = 9;
    int y = 20;
    int val()
    {
        return x * y;
    }
}
namespace divi
{
    int x = 90;
    int y = 20;
    int val()
    {
        return x / y;
    }
}
int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    cout << addi::val(x, y) << "\n";
    cout << mul::val() << "\n";
    cout << sub::val() << "\n";
    cout << divi::val()<<"\n";
    {
        using namespace addi;
        cout<<addi::val(10,20);
    } 

    return 0;
}
