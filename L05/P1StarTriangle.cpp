#include<iostream>
using namespace std;
// Pattern 4 hallow pyramind
int main(){

 int n;
    cin>>n;
    for(int row=0;row<n;row++){
        //space
        for(int col=0; col<row;col++){
            cout<<" ";
        }
        //star
        int totalcol =n-row;
        for(int col=0;col<totalcol;col++){
            if(col==0 || col == totalcol-1){
            cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}



//patter 1 pyramid(star triangle)
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         //space
//         for(int col=0; col<n-row-1;col++){
//             cout<<" ";
//         }
//         //star
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// return 0;
// }

// Pattern 2 inverted pyramid (inverted triangle)
// int main(){
//  int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         //space
//         for(int col=0; col<row;col++){
//             cout<<" ";
//         }
//         //star
//         for(int col=0;col<n-row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// return 0;    
// }

// Pattern 3 diamond
// int main(){
//     int n;
//     cin>>n;
//    // int n = num/2;
//     for(int row=0;row<n;row++){
//         //space
//         for(int col=0; col<n-row-1;col++){
//             cout<<" ";
//         }
//         //star
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int row=0;row<n;row++){
//         //space
//         for(int col=0; col<row;col++){
//             cout<<" ";
//         }
//         //star
//         for(int col=0;col<n-row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// return 0;
// }