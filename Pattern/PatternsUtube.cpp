#include<iostream>
using namespace std;

int main(){
/*
----------------- 1 pattern ------------------
    *
    **
    ***
    ****
    *****

int n;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
----------- 2 Pattern -----------------
*****
****
***
**
*

int n;
cin>>n;
for(int i=n;i>0;i--){
    for(int j=i;j>0;j--){
        cout<<"x";
    }
    cout<<endl;
}
*/
int n;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=(n-i);j++){
        cout<<" ";
    }
    for(int j=1;j<=(i);j++){
        cout<<"x";
    }
    cout<<endl;
}


/*---------------- 4 Pattern ------------------------
xxxxx
 xxxx
  xxx
   xx
    x

    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=0;j<(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"X";
        }
        cout<<endl;
    }
    return 0;
*/

}
