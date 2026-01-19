#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    int i;
    cin>>i;
    int mask = 1<<i;
if(n&mask) cout<<"ith bit is "<<1;
else cout<<"ith bit is "<<0;
    return 0;
}