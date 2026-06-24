#include <iostream>
using namespace std;

int main() {
   int t ;
   cin>>t;
   while(t--)
   {
      int n ,k;
      cin>>n>>k;
      string s;
      cin>>s;
      // now checking for 1 in the n-k string
      for(int i =0;i<n-k;i++){
         if(s[i]=='1'){
            s[i] = '0';
            if(s[i+k]=='0') s[i+k] ='1';
            else s[i+k] = '0';
         }
      }
      int f = true;
        for(int i =0;i<n;i++){
         if(s[i]=='1'){
               f =false;
         }
        }
        if(f){
         cout<<"YES\n";
        }else {
         cout<<"NO\n";
        }

   }
    return 0;
}