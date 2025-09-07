#include<bits/stdc++.h>

using namespace std;


int fun( int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        cout<<b<<endl;
    }
    else{
        cout<<a<<endl;
    }
return 0;
}


int main(){
   int n1,n2;
   cout<<"enter a n1 & n2 value:"<<endl;
   cin>>n1>>n2;
   fun(n1,n2);

   

    }
