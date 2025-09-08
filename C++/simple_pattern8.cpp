#include<iostream>
using namespace std;
int main()
{
    for(int row=1;row<=5;row++)
    {
        for(char col='a';col<='e';col++) 
        {
            cout<<col<<" ";//a,b,c,d,e print hoga 5 row me 
        }
        cout<<endl;
    }
}