#include<iostream>
using namespace std;
void StarTriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    StarTriangle(3);
    StarTriangle(5);
    StarTriangle(7);

}// function me humne ek bar star triangle banaya or fir usko 3 bar call kiya alag alag value ke sath fir 5 our fir 7 bar call krega main function se 
// or utna bar viod function star print kr dega 