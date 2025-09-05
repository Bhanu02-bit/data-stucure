#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    
  pair<int,int>a[]={{1,2} ,{4,5},{3,5}};
  sort(a,a+3,greater<pair<int,int>>());

   for(auto it:a){
       cout<<it.first<<" "<<it.second<<" "<<endl;
   }
 
    
    
    return 0;
}