#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       int x,y,z;
       int zero =0,ans = 0;
       for(int i=0;i<3;i++){
           if(x==0){
               zero++;
           }
           else if(y==0){
               zero++;
           }
           else if(z==0){
               zero++;
           }
       }
       if(zero<=1){
           ans++;
       }
       
   }
   cout<<ans<<endl;
    return 0;
}