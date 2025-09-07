#include<iostream>
using  namespace std;

int main()
{
    int n;
    cout<<"enter your number ";
    cin>>n;
    if(n<2)
    {
        cout<<"number is not prime";
        return 0;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%2==0)
            {
                cout<<"numner is not prime";
                return 0;
            }
            
    
        }
         cout<<"number is prime number";
    }
    
}