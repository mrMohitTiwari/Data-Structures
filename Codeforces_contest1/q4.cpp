#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
 

    while(t--){
        int n ;
        cin>>n;
            int i =3; int prev = 2;
            --n;
            cout<<prev<<" ";
            while(n){
                  
                        cout<<prev*i<<" ";
                            prev = i;
                            i+=2;
                            --n;
                    
                 
            }
            cout<<"\n";

    }
    return 0;
}