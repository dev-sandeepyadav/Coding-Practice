#include<iostream>
using namespace std;
int fact(int n){
int fact=1;
  for(int i=2;i<=n;i++){
  fact=fact*i;

}
  return fact;
}
int main(){
    int n;
    cout<<"enter your number :";
    cin>>n;
    for(int i=1;i<=n;i++){
    cout<<fact(i)<<endl;
    }
}
//     1
//     2
//     6
 //    24
  //   120 
  // input 5;