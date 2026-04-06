#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int n, int target) {
    int start = 0, end = n - 1, ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            ans = mid;
            end = mid - 1;  // move left
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

int findLastOccurrence(int arr[], int n, int target) {
    int start = 0, end = n - 1, ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            ans = mid;
            start = mid + 1;  // move right
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

int totalOccurrences(int arr[], int n, int target) {
    int first = findFirstOccurrence(arr, n, target);
    int last = findLastOccurrence(arr, n, target);

    if (first == -1) return 0;  // element not found
    return last - first + 1;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 6, 7, 8, 9};
    int n = 9;
    int target = 3;

    int total = totalOccurrences(arr, n, target);

    cout << "Total occurrences: " << total;

    return 0;
}