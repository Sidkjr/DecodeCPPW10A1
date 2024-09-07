#include <iostream>

using namespace std;

int main() {
    int arr[] = {0,0,0,0,1,1};
    int result = -1;

    int n = 6;
    int lo = 0;
    int hi = n-1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == 1) {
            hi = mid - 1;
            result = mid;
        }
        else {
            lo = mid+1;
        }
    }

    cout << "The number of 1s in the array is/are: " << n-result << endl;
}