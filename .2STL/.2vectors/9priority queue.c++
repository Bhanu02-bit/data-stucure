#include<bits/stdc++.h>
using namespace std;

int main()
{  //these will arrange in descending order like big num comes first 
    priority_queue<int>v;
    v.push(4);
    v.push(3);
    v.push(2);
    v.push(1);
   
   
   cout<< v.top()<<endl;
   v.pop();
     cout<<v.top()<<endl;
  
 //these will arrange in ascending order like big num comes first 
  priority_queue<int,vector<int>,greater<int>>v1;
    v1.push(4);
    v1.push(3);
    v1.push(2);
    v1.push(1);
   
   
   cout<< v1.top()<<endl;
  
    
    
    return 0;
}