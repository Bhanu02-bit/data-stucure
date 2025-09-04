
#include <bits/stdc++.h>
using namespace std;



int main()
{   vector<int>v={1,2,4,6};
  
    v.erase(v.begin()+1,v.end()-1);
    
    // for(auto ar=v.begin();ar !=v.end();ar++){
    //     cout<< *ar<<endl;
    // }
    
    for(auto ar:v){
        cout<<ar<<endl;
    }
    

    return 0;
}