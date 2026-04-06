#include <iostream>
using namespace std;

int findLastOccurrence(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            ans = mid;        // store answer
            start = mid + 1;  // move right to find later occurrence
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

    int index = findLastOccurrence(arr, n, target);

    if (index != -1)
        cout << "Last occurrence at index: " << index;
    else
        cout << "Element not found";

    return 0;
}