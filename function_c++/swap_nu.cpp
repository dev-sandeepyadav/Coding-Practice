#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first number of a ";
  
    cin>>a;
      cout<<"enter the second number of b ";
      cin>>b;
    
    int temp =a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}

/// second method a=a+b;
//                b=a-b;
//                a=a-b; tab third variable ka use nahi krna padega as temp ka 