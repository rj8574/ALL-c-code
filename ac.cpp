#include<iostream>
using namespace std;
class{
    int val;
    public:
    void setData(int i)
    {
        this->val=i;
    }
    void print()
    {
        cout<<"value :"<<this->val<<"\n";
    }
}obj1,obj2;
int main()
{
    obj1.setData(45);   
    obj1.print();
}
