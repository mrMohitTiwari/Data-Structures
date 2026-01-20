#include <iostream>
using namespace std;
void clearIthBit(int &n,int i){
    int mask = ~(1<<i);
    n &=mask;
}
void updateIthBit(int &n,int i,int val){
        // first clearing the ith bit 
        clearIthBit(n,i);
        int mask = val<<i;
                n |=mask;
}

int main() {
    int n,i,val;
    cin>>n>>i>>val;
    updateIthBit(n,i,val);
    cout<<n;

    return 0;
}