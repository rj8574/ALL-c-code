#include<iostream>
using namespace std;
template <class T>
T sum(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<sum<int>(2,4);
    return 0;
}