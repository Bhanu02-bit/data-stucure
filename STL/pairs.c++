#include <bits/stdc++.h>
using namespace std;

void explainpair(){
    //for accessing  a pair
    pair<int,int> p={1,2};
    cout<<p.first<<endl;
    //more than a pair 
    pair<int,pair<int,int>> p1={1,{25,5}};
    cout<<p1.first<<""<<p1.second.second<<""<<p1.second.first<<endl;
    //for an array
    pair<int,int>arr[]={{1,2},{23,4},{3,8}};
    cout<<arr[0].second<<endl;
    
}

int main()
{
    explainpair();

    return 0;
}