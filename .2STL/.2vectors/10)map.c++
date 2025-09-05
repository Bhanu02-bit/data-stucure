#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    
//     // map<int,int>mpp;//these will give only int values like 2 5
//      mpp.emplace(2,5);
//     mpp.insert({3,5});
//   for(auto it:mpp){
//       cout<<it.first<<" "<<it.second<<endl;
//   }
    
    
    //for storing pair in second 
//     map<int,pair<int,int>>mpp;
//     mpp[1]={1,3};
//     mpp[2]={5,6};
    

//   for(auto it:mpp){
//       cout<<it.first<<" "<<it.second.first<<endl;
//   }
   
   //
       map<pair<int,int>,int>mpp;
    mpp[{1,5}]=10;
    mpp[{2,4}]=30;
    

   for(auto it:mpp){
       cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
   }
 
    
    
    return 0;
}