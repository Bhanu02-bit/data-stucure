#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>v;
    v.push(4);
    v.push(3);
    v.push(2);
    v.push(1);
    v.pop();
    cout<<v.top()<<endl;
     cout<<v.size()<<endl;
    
    stack<int>v1;
    v.swap(v1);
   //i need use for loop when we using stack direcct accessing is not possible
    
    
    
    
    return 0;
}
