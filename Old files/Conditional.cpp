#include<iostream>

using namespace std;

int main(){
  int a,b, sum, sub, mul, div;
  string input;
  cout<<"enter two no.";
  cin>>a>>b;

  cout<<"what you want to do \n sum \n sub \n mul \n div";
  cin>>input;

  if(input=="sum"){
    sum=a+b;
    cout<<"the sum is "<<sum<< endl;
  }

  else if(input=="sub"){
    sub=a-b;
    cout<<"the subtract is "<<sub<< endl;
  }

  else if(input=="mul"){
    mul=a*b;
    cout<<"the product is "<<mul<< endl;
  }
  else if(input=="div"){
    div=a/b;
    cout<<"the division is "<<div<< endl;
  }
  else{
    cout<<"Inavlid Selection";
  }
}
