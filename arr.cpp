#include<iostream>
using namespace std;
 int main()
 {
    int a[100],b[100];
    for(int i=0;i<5;i++)
    {
        cin>>a[i]>>b[i];
    }
    cout<<"MUltiply :"<<"\n";
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cout<<a[i]*b[j]<<" ";
    cout<<"\n";

    cout<<"Addition :"<<"\n";
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cout<<a[i]+b[j]<<" ";
     cout<<"\n";
    
     cout<<"subtraction :";
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cout<<a[i]-b[j]<<" ";
        
    return 0;
 }