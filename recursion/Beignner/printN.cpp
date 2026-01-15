#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;
    print(n - 1);
    cout << n<<" ";
}
void backwardPrint(int n)
{
    if(n==0)
    return ;
    cout<<n<<" ";
    backwardPrint(n-1);

}

int main()
{
    int n;
    cin >> n;
    // print(n);
backwardPrint(n);
    cout<<endl;
    return 0;
}