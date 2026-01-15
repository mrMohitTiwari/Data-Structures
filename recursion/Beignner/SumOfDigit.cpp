#include <iostream>
using namespace std;
int SumD(int n)
{
    if(n==0) return 0;
            return n%10 + SumD(n/10);
}
int main() {
    int n ;
    cin>>n;
    cout<<SumD(n)<<endl;;
    return 0;
}