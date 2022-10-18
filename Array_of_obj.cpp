#include<iostream>

using namespace std;

class Test
{
private:
    int x,y;

public:
        Test(int xy,int yz)
        {
             x=xy;
             y=yz;

        }
        
        void add(){
            cout<<x+y<<" \n";
        }
};
int main()
{
    Test obj[]={Test(1,2),Test(3,4),Test(5,6)};
    for(int i=0;i<3;i++)
    {
        obj[i].add();
    }
    return 0;
}

