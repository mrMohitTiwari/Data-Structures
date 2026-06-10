#include <iostream>
#include<vector>
using namespace std;

int main() {
            int q ;
            cin>>q;
            while(q--){
                    int n;
                    cin>>n;
                    vector<int> v(n);
                    for(int i =0;i<n;i++)
                    cin>>v[i];
                        // count number of one's
                        int cnt =0;
                        for(int x:v) {
                            if(x==1) cnt++;
                        }
                                
                        cout<<(n-cnt)+cnt/2+cnt%2<<"\n";


            }
    return 0;
}