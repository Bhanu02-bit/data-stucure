#include<bits/stdc++.h>
using namespace std;

int main()
{  //set contains  sorted form
    multiset<int>v;
    v.insert(4);
    v.insert(4);
    v.insert(2);
    v.insert(4);
    v.insert(6);
    v.emplace(1);
   
   
// //   v.erase(4);//it is used to remove all common values
// v.erase(v.find(4));//it is used to remove only one from more values
// int cnt=v.count(4);
// v.erase(v.find(4),v.find(4)+0);//chart gpt is saying that we did not use + operators

auto first=v.lower_bound(4);//these for all deleting 4's
auto last=v.upper_bound(4);
v.erase(first,last);

for(auto it=v.begin();it != v.end();it++){
    cout<<*it<<endl;
}
   
 
    
    
    return 0;
}