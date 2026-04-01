#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of series ";
    cin>>n;

    int a=0;
    int b=1;
    int i;
    cout<<b<<" ";
    for(i=1;i<=n;i++){
        int nxtno=a+b ;
        cout<<nxtno<<" ";
        a=b;
        b=nxtno;
    }
}