#include<iostream>
using namespace std;
int main(){
    int a,b,sum=0;
    cout<<"Enter the starting and ending no.\n";
    cin>>a>>b;

    while(a<=b){
        sum= sum+a;
        a++;
    }
    cout<<"The sum is "<<sum;



}