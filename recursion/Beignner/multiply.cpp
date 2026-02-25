#include <iostream>
using namespace std;
int multiply(int n ,int k)

{
    if(k==1)
    return n;
    return n+multiply(n,k-1);
}
int main() {
    
    cout<<multiply(2,3); 
    return 0;
}