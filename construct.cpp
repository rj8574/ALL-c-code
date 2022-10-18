#include<iostream>
using namespace std;

class rectangle
{
private:
    /* data */
    int l,b;
    rectangle(int x,int y){ 
        l=x;
        b=y;
    }
public:
     
   
    // rectangle(int l);
    // rectangle(int l,int b);
     
     static rectangle fun(int ,int); 
     void display();
     
  
};
 void rectangle ::display(){
    cout<<l<<" "<<b;
 }
 rectangle rectangle ::fun(int x,int y)
 {
    return rectangle(x,y);
 }



// rectangle::rectangle()
// {
//     l=10;
//     b=20;
// }
// rectangle::rectangle(int x)
// {
//     l=b=x;
// }
// rectangle::rectangle(int x,int y)
// {
//     l=x;
//     b=y;
// }
// void rectangle::display()
// {
//     cout<<"\nlength"<<"\t"<<l<<"\t"<<"breadth :\t"<<b<<"\n";
//     cout<<"Area :"<<l*b;
// }

int main()
{
   // rectangle r;
    // rectangle r1(5);
    // rectangle r2(40,50);
    //r.display();
   // r.display();
   // r2.display();
   rectangle rr=rectangle::fun(5,8);
   rr.display();
    return 0;
}
