#include<iostream>
#include<map>
#include<string>

using namespace std;
int main()
{
    map<int,string>mp{{1,"one"},{2,"two"}};
    mp[3]="three";
    mp.insert({4,"four"});
    map<int,string>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->second<<" ";
        cout<<it->first<<" ";
    }
   // map<int> m{1,2,3};
// for(it=m.begin();it!=m.end();it++){
        
    //     cout<<it->first<<" ";
    // }
    
}