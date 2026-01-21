#include <iostream>
using namespace std;
int count_setBits(int n)
{
    int count =0;
    while(n){
        // int last_bit = (n&1);
        count += (n&1);
        n = n>>1;
    }
    return count;
}
int trick_set_bit(int n){
    // faster then the first method
    int ans =0;
    while(n){
        n = (n&(n-1));
        ans++;

    }
    return ans;
}
int main() {
    int n ;
    cin>>n;
    cout<<count_setBits(n)<<"\n";
    cout<<trick_set_bit(n);
    return 0;
}