#include<iostream>
using namespace std;
class derived
{
private:
    /* data */
public:
    float salary=1000.20;
    
};

class base: public derived
{

    public:
    float inc=100.93;
    void sum()
    {
        cout<<salary+inc<<" ";
    }
};


int main()
{   base x;
    x.sum();
    return 0;
}