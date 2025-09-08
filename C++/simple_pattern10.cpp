#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your first number :";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=i;j++)
        {
            cout<<"*"<<" ";//ek line ek star ,second line me 2 star aise print hota rahega '
        }
        cout<<endl;
    }
}