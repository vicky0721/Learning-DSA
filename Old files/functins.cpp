#include<iostream>
using namespace std;

// void printLine(){
//     for(int i=1;i<=10;i++){
//         cout<<"This is line : "<<i<< endl;
//}     }
int printSum(int a, int b){
    return a+b;
}
int main(){

    cout<<"The sum is: "<<printSum(5,4)<< endl;
    return 0;
}