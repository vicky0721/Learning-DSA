#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
void BubbleSortArr(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void BubbleSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

int main(){
    
    vector<int>v = {5,8,9,4,6,7,3,2,1};
    int arr[]= {5,8,9,4,6,7,3,2,1};
    int n=9;
    cout<<sizeof(arr)<<endl;
    BubbleSort(v);
    BubbleSortArr(arr,n);
    print(v);
    printArr(arr,n);

return 0;
}