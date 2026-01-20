#include <iostream>
using namespace std;
void clearLastIBit(int &n,int i)
{
    int mask = (-1<<i);
    n &=mask;
}
int main() {
    int n =13;
    int i=3;
    clearLastIBit(n,i);
    cout<<n;
    return 0;
}