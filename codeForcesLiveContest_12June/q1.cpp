#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--){
        int n ;
            cin>>n;
            vector<int> a(n);
            for(int i =0;i<n;i++) cin>>a[i];
            int mn=INT_MAX , mx=INT_MIN;
            for(int i =0;i<n;i++){
                    mn = min(mn,a[i]);
                    mx = max(mx,a[i]);
            }
            cout<<mx-mn+1<<"\n";
    }
    return 0;
}