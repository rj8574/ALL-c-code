#include <iostream>
using namespace std;
class friends
{
    private:
    const friends *inst;
    int data;
    friends()
    {
        data =0;
    }

    public:
    const friends *getInstance() {

        if(!inst)

        inst = new friends;

        return inst;

    }

    int getData(){

        return this -> data;

    }

    void setData(int data) {

        this->data= data;

    }

};

friends *friends::inst=0;

int main()

{

    friends *s=s->getInstance();

    cout<<s->getData()<<endl;

    s->setData(100);

cout<<s->getData()<<endl;

return 0;




}
   
