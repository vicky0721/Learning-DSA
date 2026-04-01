#include <iostream>
using namespace std;
//----------------------------hw p1 --------------------------------------------
/*
xxxx
 xxx
  xx
   x
*/
// int main() {
//     int n;
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         // print spaces
//         for(int j = 1; j < i; j++) {
//             cout << " ";
//         }
//         // print x's
//         for(int j = i; j <= n; j++) {
//             cout << "x";
//         }
//         cout << endl;
//     }

//     return 0;
// }
//--------------------------------- hw p2 ----------------------------------------------
/*
1111
 222
  33
   4
*/
// int main(){
//     int n;
//     cin>>n;
//     for (int i =1;i<=n;i++){
//         for(int j=1;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=i;j<=n;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }
/*--------------------------------------hw p3-------------------------------------------
   1
  22
 333
4444
*/
// int main(){
//     int n;
//     cin>> n;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }
/*
1234
234
34
4
*/
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
/*
   1
  23
 456
78910*/

int main() {
    int n;
    cin>>n;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
        cout<<num;
        num++;
    }
    cout<<endl;
}
}