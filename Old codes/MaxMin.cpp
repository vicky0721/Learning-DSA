#include<iostream>
using namespace std;
int main(){

    int n;

    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nElements of array are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int max=arr[n];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int min=arr[n];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"\nThe maximum elements is: "<<max;
    cout<<"\nThe minimum elements is: "<<min;

}