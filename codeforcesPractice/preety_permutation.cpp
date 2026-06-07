#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        //     int a[n];

        //         int i = 0;
        //         int j =1;
        //         for(int i =0;i<n;i++) a[i]=i+1;
        //         while(i<n && j<n){
        //             swap(a[i],a[j]);

        //             i+=2;
        //             j+=2;
        //         }
        //         if(i<n) {

        //             swap(a[i],a[n-2]);
        //         }
        //                 for(int x:a) cout<<x<<" ";
        //                 cout<<"\n";
        // 

        if (n & 1)
        {
            for (int i = 1; i < n - 2; i += 2)
            {
                cout << i + 1 << " ";
                cout << i << " ";
            }
            cout << n - 1 << " " << n << " " << n - 2 << endl;
        }
        else
        {
            for (int i = 1; i <= n; i+=2)
            {
                
                    cout << i + 1 << " "<< i << " ";
            }
            cout<<endl;
        }
    }
        return 0;
    }