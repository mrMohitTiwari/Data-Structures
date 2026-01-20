#include <iostream>
using namespace std;
void clearBitInRange(int &n,int i,int j)
{
    int mask1 = (-1)<<(j+1);
    int mask2 = (1<<i) -1;
    int final_mask = mask1 | mask2;
    n &=final_mask;
}
int main() {
        int n=31;
        int i=1;
        int j =3;
        clearBitInRange(n,i,j);
        cout<<n;
    return 0;
}