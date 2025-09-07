#include<iostream>
using namespace std;

int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        char name ='a'+row-1;
        for(col=1;col<=5;col++)
        {
            cout<<name<<" ";//    a,a,a,a,a...next line b,b,b,b,b tisare line c,c,c,c,c jitna row value rahega utna bar print hoga  
        }
        cout<<endl;
    }
}
