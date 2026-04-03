#include<iostream>
#include<vector>

using namespace std;

void shiftNegativetoLeft(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){

    int arr[]={23,54,89,-4,9,-6,-7,3,-45};
    int n=9;

    shiftNegativetoLeft(arr,n);
    cout<<"Printing Shifted array:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}