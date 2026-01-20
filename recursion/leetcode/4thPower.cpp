#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    if(n&(n-1)==0 && (n-1)%3==0) cout<<"yes\n";
    else cout<<"false\n";
    return 0;
}