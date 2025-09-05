#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>v;
    v.push(4);
    v.push(3);
    v.push(2);
    v.push(1);
   
   
   v.back()+=5;
   cout<<v.back()<<endl;
   v.pop();
    cout<<v.front()<<endl;
     cout<<v.size()<<endl;
    
  
    
    
    
    
    return 0;
}