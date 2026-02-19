#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {-1 ,-3,4,4,6,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        int x = arr[i];

        if (x > max1) {
            max3 = max2;
            max2 = max1;
            max1 = x;
        }
        else if (x > max2) {
            max3 = max2;
            max2 = x;
        }
        else if (x > max3) {
            max3 = x;
        }
        // finding the two minimum numbers
        if(x<min1){
            min2 = min1;
            min1 = x;
        }
        else if(x<min2) min2 = x;
    }

    cout << "Max1: " << max1 << endl;
    cout << "Max2: " << max2 << endl;
    cout << "Max3: " << max3 << endl;
    cout << "Min1: " << min1 << endl;
    cout << "Min2: " << min2 << endl;
   


    return 0;
}
