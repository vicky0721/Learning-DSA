#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int tar){
    int start =0;
    int end=arr.size()-1;

    while(start<=end){
        
        int mid= start+(end-start)/2;

        if(tar>arr[mid]){
            start=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 2, 5, 8, 9, 10, 12};
    int tar = 10;

cout<<arr1.size()<<endl;
    cout << binarySearch(arr1, tar) << endl;

    return 0;
}