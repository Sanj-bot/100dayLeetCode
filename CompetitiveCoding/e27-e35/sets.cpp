#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value:s){
        cout<<value<<endl;
    }
    for(auto it= s.begin();it!=s.end();++it)
    {
        cout<<(*it)<<endl;
    }
}

int main()
{
     set<string> s;
     set<set<string>> s2;
     s.insert("abc");
     s.insert("bcd");
     s.insert("efg");
     auto it=s.find("abc");
     if(it!=s.end()){
        cout<<(*it)<<endl;
        s.erase(it);
     }
     auto it2=s.find("bcd");
     s.erase(it2);
     print(s);
     s.erase("efg");

     set<string> s;
     int n;
     cin>>n;
     for(int i=0;i<n;++i){
        string str;
        cin>>str;
        s.insert(str); // set is in lexicogrpahical order.
     }
}
