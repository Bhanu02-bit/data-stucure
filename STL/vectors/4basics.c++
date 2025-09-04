
#include <bits/stdc++.h>
using namespace std;



int main()
{   vector<int>v(3,100);
//swap
 v.swap(v);
    for(auto it = v.begin();it !=v.end();it++){
        cout<< *it <<endl;
    }

    return 0;
}