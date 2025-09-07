#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the row :";
    cin>>n;
    cout<<"e ter the column ";
    cin>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
