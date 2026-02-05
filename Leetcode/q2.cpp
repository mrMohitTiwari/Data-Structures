#include <iostream>
#include <vector>
using namespace std;
bool ans(vector<int>& nums, int k)
{
    int n = nums.size();
    if (n == 1)
        return false;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                if ((abs(j - i)) <= k)
                {
                    cout << abs(j - i);
                     return true;
                }
            }
        }
    }
    return false;
}

int main()
{
   vector<int> v={1,2,3,1,2,3};
   cout<<ans(v,2)<<endl;
    return 0;   
}