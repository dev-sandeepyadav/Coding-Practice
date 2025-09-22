#include<iostream>
using namespace std;
int maxthree(int a,int b,int c){
    
    int max;
    if(a>b &&a>c){
        max=a;
    }
    else if(b>a &&b>c){
        max=b;

    }
    else
    max=c;
    return max;
}

int main(){
    int a=2,b=54,c=9;
    cout<<maxthree(a,b,c);
}