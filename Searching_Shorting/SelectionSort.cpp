#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void SelectionSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[minIndex]){
                minIndex=j;
            }
        }
        swap(v[i],v[minIndex]);
    }
}

void SelectionSortArr(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main(){

    vector<int>v={44,22,33,55,11};
    int arr[] = {44,22,33,55,11};
    int n=5;
    cout<<"Sorted vector: ";
    SelectionSort(v);
    print(v);
    cout<<"\vSorted array:";
    SelectionSortArr(arr,n);
    printarr(arr,n);

return 0;
}