#include<iostream>
using namespace std;
void fun(int x,int y){
    cout<<"void address"<<&x<<endl;
    cout<<"void address"<<&y;
}



int main(){
    int x = 4;
    int y=6;
    cout<<&x<<endl;
    cout<<&y<<endl;
    fun(x,y);
}