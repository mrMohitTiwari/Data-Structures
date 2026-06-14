#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {

        int n ,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool flip =0;
        int i =0;
        for(;i<n;i++){
          
                if(s[i]=='1') break;

        }
     if(i==n){
         
        cout<<"yes\n";
        continue;
     }else if(i+k>=n || s[i]=='0'||s[i+k]=='0') {
        cout<<"NO\n";
        continue;
     }
     s[i] = '0';
     s[i+k] = '0' ;

     i = 0; 
     for(;i<n;i++)
     {
        if(s[i]=='1') break;
     }
     if(i==n)  cout<<"YES\n";
     else cout<<"NO\n";



        
    }
    return 0;
}