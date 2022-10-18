#include<iostream>
using namespace std;

namespace first{
    int x=9;
    int y=23;
}

namespace second{
    double x=9.115;
    double y=23.07;
}
int main()
{
    using first::x;
    using second::y;
    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<first::y<<"\n";
    cout<<second::x;

    return 0;
} 