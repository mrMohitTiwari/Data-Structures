#include <iostream>
using namespace std;
vector<int> rotate(vector<int> &a, int k)
{
    int n = a.size();
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k )% n] = a[i];
    }
    return temp;
}
int kadanes(vector<int> &a)
{
   int cs = a[0];
   int ms = a[0];
   for(int i=1;i<a.size();i++)
   {
        cs = max(cs,cs+a[i]);
        ms = max(ms,cs);

   }
   return ms;
}

// brute force for finding sum of circular subarray
int max_circular(vector<int> &a)
{
    int n = a.size();
        int maxi = kadanes(a);
            for(int i =1;i<n;i++)
            {
                vector<int> ith = rotate(a,i);
             maxi = max(maxi,kadanes(ith));
            }
            return maxi==0?-1:maxi;
}
// calculating minimum sum subarray
int min_kadanes(vector<int> &a)
{
   int cs = a[0];
   int ms = a[0];
   for(int i =1;i<a.size();i++)
   {
    cs = min(cs,a[i]);
    ms = min(cs,ms);
   }
    return ms;
}
int maxSumCir(vector<int>&nums){
    int n = nums.size();
    // storing the result for single subarray
    int m1 = kadanes(nums);
    int m2 = min_kadanes(nums);
    int m3 =0;
    for(int x:nums) m3+= x;
    return max(m1,m3-m2);

}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
cout<<max_circular(a);
cout<<maxSumCir(a);


    return 0;
}