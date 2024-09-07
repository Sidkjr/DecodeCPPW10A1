#include <iostream>
using namespace std;

int main() {
    int n = 36;
    int lo = 1;
    int hi = n;
    bool isPerfectSquare = false;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        int square = mid * mid;

        if (square == n) {
            isPerfectSquare = true;
            break;
        } else if (square < n) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    if (isPerfectSquare) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
