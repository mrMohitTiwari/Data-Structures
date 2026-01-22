#include <iostream>
#include<vector>
using namespace std;
int findUnique(vector<int> v){
    // creating a 32-bit vector which will have sum of every bit of it's number
    vector<int> sum_map(32,0);
//    adding bits of each element
   for(auto x:v){
    for(int i=0;i<32;i++){
                int last_bit = x&1;
                sum_map[i]+=last_bit;
                x = x>>1;
    }
   }
//    getting the number
int ans=0;
for(int i=0;i<32;i++){
            int x = sum_map[i]%3;
            ans += x*(1<<i);
}
return ans;
}
int main() {
        vector<int> v={1,1,1,2,2,2,4,4,4,5};
    int res=findUnique(v);
    cout<<res;
    return 0;
}