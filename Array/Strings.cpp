#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char ch[12];
    cout<<"Enter your Character ";
    // cin>>ch;
    cin.getline(ch,100);

    cout<<"\nPrinting Character ch: "<<ch<<endl;
    cout<<"\nThe length of string is: "<<strlen(ch);

return 0;
}