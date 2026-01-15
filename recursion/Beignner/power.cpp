#include <iostream>
using namespace std;
int pow(int n ,int r)
{
    if(r==0)
    return 1;
    return n*pow(n,r-1);

}
int main() {
    int n ,r;
    cin>>n;
    cin>>r;
    cout<<pow(n,r);
    return 0;
}