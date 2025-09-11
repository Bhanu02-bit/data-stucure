
#include <iostream>
using namespace std;



void f(int i,int n){
    if(i<1){
        return ;
    }
     //because of these cout before the f(i-1,1 ) the i is prin first 
    cout<<i<<endl;
    f(i-1,n);

    
}
int main()
{  int n;
cout<<"enter n value:"<<endl;
   cin>>n;
   f(n,n);
    

    return 0;
}