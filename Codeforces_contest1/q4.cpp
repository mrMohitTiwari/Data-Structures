#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    // precomputation of Primes
    vector<int> isPrime(1000000,1);
    isPrime[0] = isPrime[1] =0;


    while(t--){
        int n ;
        cin>>n;
            int i =3; int prev = 2;
            cout<<prev<<" ";
            while(n){
                    if(isPrime[i]) {
                        cout<<prev*i<<" ";
                            prev = i;
                            --n;
                    }
            }

    }
    return 0;
}