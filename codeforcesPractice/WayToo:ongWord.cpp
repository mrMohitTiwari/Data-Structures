#include <iostream>
using namespace std;

int main() {
    int q;
    cin>>q;
    while(q--){

    
    string s ;
    cin>>s;
    int n =s.size();
            if(n<=10) {
                cout<<s<<"\n";
            }else{
                cout<<s[0]<<n-2<<s[n-1]<<"\n";
            }
        }
    return 0;
}