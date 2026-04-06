#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            ans = mid;        // store answer
            end = mid - 1;    // move left to find earlier occurrence
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 6, 7, 8, 9};
    int n = 9;
    int target = 3;

    int index = findFirstOccurrence(arr, n, target);

    if (index != -1)
        cout << "First occurrence at index: " << index;
    else
        cout << "Element not found";

    return 0;
}