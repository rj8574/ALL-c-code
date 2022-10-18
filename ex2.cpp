#include<iostream>
using namespace std;

namespace  first{
    int x=9;
    int y=2323;

}
namespace  second{
    double x=9.21585;
    double y=23.23;
    
}

int main()
{
    using namespace first;
    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<second::x<<"\n";
    {
        using namespace first;
        cout<<x;
    }

}