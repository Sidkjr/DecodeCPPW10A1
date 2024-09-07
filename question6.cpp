#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int lo = 0;
    int hi = n;
    int completeRows = 0;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        int currentSum = mid * (mid + 1) / 2;

        if (currentSum == n) {
            completeRows = mid;
            break;
        } else if (currentSum < n) {
            completeRows = mid;  
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << "Number of complete rows: " << completeRows << endl;

}