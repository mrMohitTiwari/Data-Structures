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
        for(int i =0;i<n;i++){
                if(s[i]=='0') break;

        }
        if(i==n) cout<<"YES\n";
        else{
            if(i+k>=n) {cout<<"NO\n";
            continue;}
            else {
                if(s[i]=='0'){
                    s[i]='1';
                
                }
                else s[i] = '0';
                if(s[i+k]=='0') s[i+k]='1';
                else s[i+k] = '0';
            }
        }
        // checking if string is 0 now
            i =0;
            for(;i<n;i++)
            {
                if(s[i]=='1') {
                    cout<<"NO\n";
                    break;
                    
                }
            }
            if(i==n) cout<<"YES\n";
    }
    return 0;
}