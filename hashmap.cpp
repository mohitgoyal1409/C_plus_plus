#include<iostream>
using namespace std;
#include<map>
#include<unordered_map>

int main(){
    
    //   creation
    unordered_map<string,int> m;
    // insertion

    // 1
    pair<string,int> p=make_pair("babbar",3);
    m.insert(p);
    // 2
    pair<string,int> pair2("love",2);
    m.insert(pair2);

    // 3
    m["mera"]=1;
    m["mera"]=2; // this will updation in mera key
    
    // search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
    cout<<m["unknown"]<<endl;    //create a unknown key of value zero
    cout<<m.at("unknown")<<endl;
    
    // size
    cout<<m.size()<<endl;
    // check
    cout<<m.count("love")<<endl;
    cout<<m.count("mera")<<endl;
    // erase
    m.erase("love");
    cout<<m.size()<<endl;

    //iterator
    unordered_map<string,int> :: iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;

    }
    return 0;
}