#include <iostream>
using namespace std;

int main() {
    int n ,k;
    cin>>n>>k;
    int i =0;
    int j = n-1;
    int cnt = 0;
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    while(i<n){
            if(a[i]>k) break;
            else cnt++;
            i++;
    }
// right end;
while(j && j!=i-1){
    if(a[j]>k) break;
    else cnt++;
    j--;
}
cout<<cnt<<"\n";
    return 0;
}