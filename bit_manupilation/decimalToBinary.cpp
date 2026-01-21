#include <iostream>
using namespace std;
int binary(int n){
    int ans =0;
    int pov=1;
    while(n>0){
                int lastBit = (n&1);
                ans += pov*lastBit;
                pov = pov*10;
                n=n>>1;

    }
    return ans;
}
int main() {
    int n ;
    cin>>n;
    cout<<binary(n)<<endl;
    return 0;
}