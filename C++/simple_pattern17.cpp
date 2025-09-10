#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your number :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=n-(i-1);j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
//6
//6 5
//6 5 4
//6 5 4 3
//6 5 4 3 2
//6 5 4 3 2 1 output will be generated ......