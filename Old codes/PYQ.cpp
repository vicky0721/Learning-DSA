#include<iostream>
using namespace std;
// 1.Question find max in 3 no. 
int main(){
    /*
    if (n1>n2 && n1>n3){
    cout<<"n1 is max";
    }
    else if(n2>n3 && n2>n1){
    cout<<"n2 is max";
    }
    else if (n3>n1 && n3>n2){
    cout<<"n3 is max"}
    */


// 2. Print counting upto n.
    /*
    for(int i=1;i<=n;i++){
    cout<<i<<endl;
    }
    */

// 3. check prime no.
int n,sum=0;
    cin>>n;
    for( int i=0;i<=n; i++){
        if (i%2==0){
            sum = sum +i;
        }
    }
    cout << sum;
return 0;
}