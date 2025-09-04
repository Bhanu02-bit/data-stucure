
#include <bits/stdc++.h>
using namespace std;



int main()
{   vector<int>v={1,2,4,6};
    vector<int>::iterator ar=v.begin();
    ar++;
    
    // for(auto ar=v.begin();ar !=v.end();ar++){
    //     cout<< *ar<<endl;
    // }
    
    for(auto ar:v){
        cout<<ar<<endl;
    }
    

    return 0;
}