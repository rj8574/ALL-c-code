#include <iostream>
using namespace std;
class myclass
{
public:
    int myNum;
    string myString;

};

int main()
{
    myclass myobj;
    myobj.myNum = 15;

    myobj.myString = "Some text";

    cout << myobj.myNum << "\n";

    cout << myobj.myString;

    return 0;
}