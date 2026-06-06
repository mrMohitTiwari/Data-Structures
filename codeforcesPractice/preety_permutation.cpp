#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int a[n];


            int i = 0;
            int j =1;
            for(int i =0;i<n;i++) a[i]=i+1;
            while(i<n && j<n){
                swap(a[i],a[j]);

                i+=2;
                j+=2;
            }
            if(i<n) {

                swap(a[i],a[n-2]);
            }
                    for(int x:a) cout<<x<<" ";
                    cout<<"\n";
    }
    return 0;
}