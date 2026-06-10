#include <iostream>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sm = 0;
        for(int i =0;i<6;i++)
        {
            if(i<3) sm += s[i]-0;
            else sm -= s[i]-0;
        }
        if(!sm) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}