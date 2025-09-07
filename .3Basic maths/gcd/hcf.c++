#include<bits/stdc++.h>

using namespace std;


int fun( int n1,int n2){
    int gcd=1;
    
   for(int i=min(n1,n2);i>0;i--){// i=0,i=min(n1,n2),i++
       if(n1%i==0 && n2%i==0){
            gcd=i;   //gcd =i,printi but outside for loop
            break;

       }
  
   }
   cout<<gcd<<endl;
   
return 0;
}


int main(){
   int n1,n2;
   cout<<"enter a n1 & n2 value:"<<endl;
   cin>>n1>>n2;
   fun(n1,n2);

   

    }
