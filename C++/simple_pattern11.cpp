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
            cout<<j<<" ";//es code number print hoga jaise first line me 1 and second line me 1,2 third me 1,2,3, aise print hoga 
        }
        cout<<endl;
    }
}
