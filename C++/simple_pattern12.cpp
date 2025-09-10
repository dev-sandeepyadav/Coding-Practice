#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your number :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";//first line me 1 and second line me 2,2 or third line me 3,3,3 aise print hga 
        }
        cout<<endl;
    }
}