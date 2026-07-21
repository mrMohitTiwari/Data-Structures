#include <iostream>
using namespace std;
int max_sum_from_subarray(vector<int> &a ){
    int n = a.size();
    int max_sum = INT_MIN;
    for(int i =0;i<n;i++)
    {
        for(int j =i;j<n;j++)
        {
            int sum = 0 ;
            for(int k = i ; k<=j ; k++){
                sum += a[k];
            }
            max_sum = max(max_sum,sum);
        }
    }
    return max_sum;
}
int main() {
    int n ;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    cout<<max_sum_from_subarray(a);
    return 0;
}