#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a[7];
        int sum = 0;
        int x;
        for(int i =0;i<7;i++){
            cin>>x;
            a[i]=x;
                sum += -(x);

        }
       
        int t = sum;
        int ms = sum+2*a[0];
        for(int i =1;i<7;i++){
            ms = max(sum+2*a[i],ms);
        }
            cout<<ms<<endl;

    }
    return 0;
}