#include <iostream>
using namespace std;

struct some
{
    int x,y;
    char c;
    bool b;
}s;

int main(){

s.x=5;
s.y=10;
s.c='a';
s.b=true;
int* p=reinterpret_cast<int*>(&s);
cout<<sizeof(s)<<endl;
cout<<*p<<endl;
p++;
cout<<*p<<endl;
p++;
char*ch=reinterpret_cast<char*>(p);

cout<<*ch<<endl;
ch++;
bool*n=reinterpret_cast<bool*>(ch);
n++;
cout<<*p<<endl;

cout<<*(reinterpret_cast<bool*>(ch));

return 0;





}