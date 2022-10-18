#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void print(list<int> lst){
    list<int>::iterator it;
    for(auto it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
        //cout<<"\n";
    }

}
int main()
{
    list<int>  list1,list2;
    for(int i=0;i<5;i++)
    {
        list1.push_back(i);
        list2.push_back(i+5);

    }
    print(list1);
   
    cout<<"\nlist1 : ";
    print(list1);
    cout<<"\nlist2 : ";
    list2.pop_back();
    print(list2);
     cout<<"\n"<<list1.front();
    cout<<"\n"<<list1.back();
    list1.pop_front();
    print(list1);



}