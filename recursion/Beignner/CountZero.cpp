#include <iostream>
using namespace std;
// only for natural numbers
int CountZero(int n)
{
    if(n==0)
    return 0;
    if((n%10)==0){
        return 1 + CountZero(n/10);
    }
    return CountZero(n/10);

}
int main() {

    cout<<CountZero(1030)<<endl;
    return 0;
}