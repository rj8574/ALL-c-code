#include<iostream>
using namespace std;
class car{
    public:
    virtual void start()=0;
    virtual void stop ()=0;
    int fun(){
         cout<<"gnksfwfnwowflf cl"<<"\n";
    }

};
class innova:public car
{
    public:
    void start()
    {
        cout<<"INNOVA START"<<"\n";
    }
    void stop()
    {
        cout<<"INNOVA STOP"<<"\n";
    }
};
class swift : public car
{
    public:
    void start()
    {
        cout<<"swift START"<<"\n";
    }
    void stop()
    {
        cout<<"Swift STOP"<<"\n";
    }
};
 int main(){
    car *c=new innova();
    c->start();
    c->fun();
    c=new swift();
   // c->stop();
    
    c->start();
    c->stop();
    return 0;
 }