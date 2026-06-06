#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        n = 3*n;
            int i =1;
            int j =1;

            while(n-j>i){
                cout<<i<<" "<<n-j<<" "<<n-j+1<<" ";
                i++;
                j+=2;
            }
            cout<<endl;
    }
    return 0;
}