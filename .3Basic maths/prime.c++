#include<bits/stdc++.h>

using namespace std;


int fun( int n){
    vector<int>ls;
    int cunt=0;
    for(int i=1;i*i<=n;i++){
        
        if(n%i==0){
            cunt++;
        ls.push_back(i);
        if((n/i) !=i){
            cunt++;
            ls.push_back(n/i);
        }
    }
    }
    sort(ls.begin(),ls.end());
    
   
        if(cunt==2){
            cout<<"prime"<<endl;
        }
        else{
            cout<<"not a prime"<<endl;
        }
    

return 0;
}


int main(){
   int n;
   cout<<"enter a n value:"<<endl;
   cin>>n;
   fun(n);
   

    }
