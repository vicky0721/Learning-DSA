#include<iostream>
#include<climits>
using namespace std;




/*---------------------- Simple array --------------------------------
    int main(){
    int n=6;
    int arr[n] = {1,7,9,5,4,6}; 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
*/

/*------------- Finding Element in array -----------------------------
int main(){
    int num,n=6;
    bool status = false;
    int arr[n] = {1,7,9,5,4,6}; 
    cout<<"Enter element to find in array:";
    cin>>num;

    for(int i=0;i<n;i++){
        if(arr[i]==num){
            cout<<"Element found in array at index "<<i;
            status = true;
            break;
        }
    }
    if(status== false){
        cout<<"Element not found in array.";
    }

*/


/*---------------MIN & MAX in Array ----------------------------------

int findMinInArray(int arr[],int size){
    int minAns = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
            minAns=arr[i];
        }
    }
return minAns;
}

int findMaxInArray(int arr[],int size){
    int maxAns =INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxAns){
            maxAns=arr[i];
        }
    }
return maxAns;
}

int main(){

    int size=6;
    //int arr[size] = {1,7,9,5,4,6};
    int arr[size] = {7,86,6,4,61,6}; 
    
    int min=findMinInArray(arr,size);
    int max=findMaxInArray(arr,size);
    cout<<"The minimum Element in array is: "<<min<<endl;
    cout<<"The maximum element in array is: "<<max<<endl;

*/
/*-------------------------REVERSE ARRAY ----------------------------

void reverseArray(int arr[],int size){
    for(int i=0;i<(size/2);i++){
        swap(arr[i],arr[(size-i-1)]);
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    int size=6;
    int arr[size] = {1,7,9,5,4,6};


    reverseArray(arr,size);
    cout<<"The elements after reverseing the array are: ";
    printArray(arr,size);
*/
/*----------------- Shorting Array 0 & 1 -----------------------------
void shortArray(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void printArray(int arr[],int size){
    cout<< "Sorted array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

   

    // Online C++ compiler to run C++ program online
    
    int size = 10;
    int arr[size]=  {0,0,1,0,1,1,1,0,1,0,};
    
    shortArray(arr,size);
    printArray(arr,size);
*/
 
/*--------------------- Right Shift Array -----------------------------

  void shiftArray(int arr[], int size){
   int temp= arr[(size-1)];
   for(int i=(size-1);i>0;i--){
       arr[i]=arr[i-1];
    }
   
   arr[0]=temp;
}
void printArray(int arr[],int size){
    cout<< "Sorted array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    
    int size=6;
    int arr[size] = {1,7,9,5,4,6};
    
    shiftArray(arr,size);
    printArray(arr,size);
*/
/*------------------ Left Shift Array -----------------------------------
 void LeftShiftArray(int arr[], int size){
   int temp= arr[0];
   for(int i=0;i<size;i++){
       arr[i]=arr[i+1];
    }
   
   arr[(size-1)]=temp;
}
void printArray(int arr[],int size){
    cout<< "Left Sorted array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    
    int size=8;
    int arr[size] = {2,4,5,6,4,3,2,9};
    
    LeftShiftArray(arr,size);
    printArray(arr,size);
*/

void twoShiftArray(int arr[], int size){
   int temp= arr[size-1];
   int temp1=arr[size-2];
   for(int i=(size-1);i>=2;i--){
       arr[i]=arr[i-2];
    }
   
   arr[0]=temp1;
   arr[1]=temp;
}
void printArray(int arr[],int size){
    cout<< "Left Sorted array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    
    int size=8;
    int arr[size] = {2,4,5,6,4,3,2,9};
    
    twoShiftArray(arr,size);
    printArray(arr,size);














return 0;
}