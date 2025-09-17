#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"user input number";
    cin>>n;
   for(int i=1;i<=n;i++)
   {
    //print * 
    for(int j=1;j<=i;j++)
    
        cout<<"* ";



    //print space
    for(int j=1;j<=2*n-2*i;j++)
    cout<<"  ";
    //print *
    for(int j=1;j<=i;j++)
    
        cout<<"* ";
    cout<<endl;
   }
   for(int i=n-1;i>=1;i--)
   {
    //print * 
    for(int j=1;j<=i;j++)
    
        cout<<"* ";



    //print space
    for(int j=1;j<=2*n-2*i;j++)
    cout<<"  ";
    //print *
    for(int j=1;j<=i;j++)
    
        cout<<"* ";
    cout<<endl;
   }
}
