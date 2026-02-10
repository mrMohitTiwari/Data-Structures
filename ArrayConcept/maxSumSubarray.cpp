#include <iostream>
#include<vector>
using namespace std;
int maxSubArrLen(vector<int>& nums,int k)
{
    int n = nums.size();

    int ms =0,ml=0;
    int length;
    for(int i =0;i<n;i++)
    {
        int sum =0; 
         length =0;
        for(int j =i;j<n;j++){
            sum +=nums[j];
            length++;
            if(sum<=k){
                ms = max(ms,sum);
                
                ml = max(ml,length);
            }
            else break;
        }
    }
    return ml;
}
// brute force
int main() {
    vector<int> v = {2, -1, 2, -1, 2};

    cout<<maxSubArrLen(v,3);
    return 0;
}