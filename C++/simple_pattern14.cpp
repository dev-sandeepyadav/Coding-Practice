#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your number :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char name ='a'+i-1;
        for(int j=1;j<=i;j++)
        {
            cout<<name<<" ";//first me only a,and second me only b, third me only c print hoga
        }
        cout<<endl;
    }
}