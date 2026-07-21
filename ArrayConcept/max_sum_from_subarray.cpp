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
// using prefix sum 
int prefix_sum(vector<int> &a)
{
    int n =a.size();
    // calculating the prefix sum 
    vector<int> pf(n,0);
    pf[0] = a[0];
    for(int i =1;i<n;i++)
    {
        pf[i] = pf[i-1]+a[i];
    }
    int maxi = pf[0];
    for(int i =1;i<n;i++) maxi = max(maxi,pf[i]);
    return maxi;
}
int main() {
    int n ;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    cout<<max_sum_from_subarray(a)<<"\n";
    cout<<prefix_sum(a)<<"\n";
    return 0;
}