#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int target){
    int start =0;
    int end= n-1;
    int mid= (start+end)/2;

    while (start<=end){
        
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            start = mid+1;
        }
        else if(target<arr[mid]){
            end= mid-1;
        }
        mid=(start+end)/2;
    }
return -1;
}

int findFirstOccurance(int arr[],int n, int target){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans= -1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid; //store ans;
            e=mid-1; //shift to left
        }
        else if(target>arr[mid]){
            s=mid+1; //shift to right
        }
        else if(target <arr[mid]){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main(){
    int arr[]={1,2,3,3,3,6,7,8,9};
    int n=9;
    int target =8;

     

    int ansIndex= binarySearch(arr,n,target);
    if(ansIndex==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index: "<<ansIndex;
    }
}