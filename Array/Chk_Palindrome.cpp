#include<iostream>
#include<string.h>

using namespace std;

bool checkpalindrome(char ch[],int n){

    int i =0;
    int j=n-1;
    while(i<=j){

        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char ch[12];

    cin.getline(ch,100);   
    
    int len= strlen(ch);
    
    bool ispalin = checkpalindrome(ch,len);
    if(ispalin){
        cout<<"Valid Palindrome";
    }
    else
    cout<<"Not Palindrome";

return 0;
}

