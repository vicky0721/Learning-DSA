#include<iostream>
#include<vector>

using namespace std;
//Method 1 of printing vector
void printvctr(vector<int>v){
    cout<<"Printing Vector"<<endl;
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
//method 2 to print vactor
void printvct2(vector<int>v){
    cout<<"Printing Vector"<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    
    //initialization of vector
    vector<int>v;
    vector<int>v2(5,-1);
    vector<int>v3 = {1,2,3,4,5};
    vector<int>v4{7,8,9,94,5,6,4};

    //taking input form user
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int d;
    
        cin>>d;
        v.push_back(d);
    }

    //Copying a vector
    vector<int>v5(v4);
    
 /*   //pushing elements
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    //deleting elements
    v.pop_back();
    v.pop_back();

   
*/
    //printing vector
    printvctr(v5);

 //delete all element from vector at once
    v.clear();
    cout<<v.size();





}