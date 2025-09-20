//Q2..PASTCAL TRIANGLE  USING BY FUCNCTION........

#include<iostream>
using namespace std;
int fact (int x){
    int f= 1;
    for(int i=2;i<=x;i++){
        f= f*i;
    }
    return f;
}
int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int main(){
    int n;
    cout<<"enter number of n ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}
//   1
//  1  1
// 1  3  1
//1  4  4   1 OUTPUT WILL BE GENERATED.....