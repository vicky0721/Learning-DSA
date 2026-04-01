#include<iostream>

using namespace std;
//----------------------------------- pattern 1 -----------------------------------
//1234
//1234
//1234
//1234

/*int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}*/
//============================pattern 2 ==========================================
// int main(){
//     int n;
//     cin>>n;
//     int i=1;

//     while (i<=n){
    
//         int j=1;
    
//         while(j<=n){
//             cout<<n-j+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// --------------------------pattern 3-----------------------------
/* 
1 2 3
4 5 6
7 8 9 */

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while (i<=n){
//         int j=1;
//         while(j<=3){
//             cout<<i<<" ";
//             i++;
//             j++;
//         }
//         cout<<endl;
//     }
// }

//-------------------------------------- pattern 4 ------------------------------------------
/*
*
**
***
****                        */

// int main(){

//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }
// }

//------------------------- pattern 5 ------------------------

/*
1
22
333
4444
*/
// int main(){

//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<j<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }
// }
/* -------------------------------pattern 6---------------------------------------
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while (row<=n){
//         int col=1;
//         while(col<=n){
//             char ch='A'+row-1;
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

/*--------------------------------------pattern 7---------------------------------------
A
BC
CDE
DEFG
*/
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//             char ch=('A'+row+col-2);
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }
/*-----------------------------------------pattern 8------------------------------------
   *
  **
 ***
****
*/
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int space=n-row;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int col=1;
//         while(col<=row){
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }
/*---------------------------------pattern 8------------------------------------
   1
  121
 12321
1234321
*/
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //space triangle
        int space=n-row;
        while(space){
            cout<<" 4";
            space--;
        }
        //2nd trianlge
        int col= 1;
        while(col<=row){
            cout<<col;
            col++;
        }
        //3rd triangle
        int start = row-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        row++;
    }
}