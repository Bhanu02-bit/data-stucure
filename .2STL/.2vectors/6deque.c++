#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>v;
    v.emplace_front(4);
    v.push_front({3});
    
    
    
    for(auto it=v.begin();it !=v.end();it++){
        
        cout<<*it<<endl;
    }

    return 0;
}