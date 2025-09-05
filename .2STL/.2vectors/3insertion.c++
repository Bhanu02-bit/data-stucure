
#include <bits/stdc++.h>
using namespace std;



int main()
{   vector<int>v(3,100);
//for insert single value
    v.insert(v.begin(),390);
    //for inserting multiple values
    v.insert(v.begin()+1,3,8);
    //3 eights at begin()+1 positiion
    
    //one vector into another vector
    vector<int>copy(2,600);
    v.insert(v.begin(),copy.begin(),copy.end());
    for(auto it = v.begin();it !=v.end();it++){
        cout<< *it <<endl;
    }

    return 0;
}