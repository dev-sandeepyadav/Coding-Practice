#include<iostream>
using namespace std;
int main()
{
    int a;
    for(int k=1;k<=5;k++)
    {
        cout<<"enter your number ";
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
}
// k<= jitna value rahega utna bar input show hoga our utna hi bar star print krega 
//