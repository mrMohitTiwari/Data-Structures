#include<iostream>
using namespace std;
int removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;

    // To store index of next unique element
    int j = 0;

    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];

    arr[j++] = arr[n - 1];
    return j;
}
int main()
{
    int n ;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    n=removeDuplicates(a,n);
    for(int i =0 ;i<n;i++) cout<<a[i]<<" ";

}