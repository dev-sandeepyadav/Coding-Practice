// find the factor of any given number 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your number : ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
        i++;
    }
}