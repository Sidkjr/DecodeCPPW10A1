#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    int n = 4; 
    int maxRowIndex = -1;
    int maxOnes = 0;

    for(int i = 0; i < n; i++) {
        int lo = 0;
        int hi = n - 1;
        int firstOneIndex = n;  

        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(arr[i][mid] == 1) {
                firstOneIndex = mid;
                hi = mid - 1;  
            } else {
                lo = mid + 1; 
            }
        }
        int numberOfOnes = n - firstOneIndex;
        if(numberOfOnes > maxOnes) {
            maxOnes = numberOfOnes;
            maxRowIndex = i;
        }
    }

    cout << "Row with the maximum number of 1s is: " << maxRowIndex+1 << endl;
}