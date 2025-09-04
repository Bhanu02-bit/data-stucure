#include<bits/stdc++.h>
using namespace std;

int main()
{  //set contains unique and sorted form
    set<int>v;
    v.insert(4);
    v.insert(3);
    v.insert(2);
    v.insert(5);
    v.insert(6);
    v.emplace(1);
   
   
   auto it=v.find(4);
//   v.erase(2);
//   while(it !=v.end()){
//       cout<<"found"<<*it<<endl;
//       it++;
//   }
//for erasing from one to another 
auto v1=v.find(2);
auto v2=v.find(6);
v.erase(v1,v2);

for(auto it=v.begin();it != v.end();it++){
    cout<<*it<<endl;
}
   
 
    
    
    return 0;
}