#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the row :";
    cin>>n;
    cout<<"e ter the column ";
    cin>>m;
    for(int i=1;i<=n;i++)//inpute n=5
    {
        for(int j=5;j>=m;j--)//input m = 1   5,4,3,2,1 print hoga
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}