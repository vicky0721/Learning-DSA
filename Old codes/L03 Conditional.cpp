#include<iostream>

using namespace std;

int main(){
    int n,a,sum=0;
    cout<<"Enter the last no.";
    cin>>n;
    while(a<n){
        sum=sum+a;
        a+2;
    }
    cout<<"The sum of even no. is "<<sum;


}