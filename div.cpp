#include<iostream>
using namespace std;
void fun(int x)
{
     
    try
    {
        if(x>=5)
        {
            throw x;
        }
    }
    catch(int  x)
    {
        cout<<"Float"<<x<<"\n";
        throw;
    }
    catch(char x)
    {
        cout<<"adasda"<<"\n";
        throw;
    }

}
int main()
{
    // int x=0,b=10;
    // b=b/x;
    // cout<<"hello world";
    int x;
    cin>>x;
    try{
     fun(x);
    }
    catch(int ex)
    {
        cout<<"dadad"<<ex;
    }
   
    
    return 0;
}