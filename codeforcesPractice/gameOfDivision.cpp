#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // looping for each element
        int i = 0;
        while (i < n)
        {
            int j = 0;
            while (j < n)
            {
                if (i != j)
                {
                    if ((abs(a[i] - a[j]) / k))
                        j++;
                    else if (j == n - 1)
                    {
                        cout << "yes\n"
                             << i << "\n";
                        break;
                    }
                }
                ++i;
            }
        }
        if(i==n-1) cout<<"NO\n";
    }

    return 0;
}