#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 3, 4};
    int n = 5;
    int lo = 0;
    int hi = n - 1;
    int repeated = -1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == arr[mid + 1] || (mid > 0 && arr[mid] == arr[mid - 1])) {
            repeated = arr[mid];
            break;
        }
        if (arr[mid] > mid + 1) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << "The repeated number is: " << repeated << endl;

}