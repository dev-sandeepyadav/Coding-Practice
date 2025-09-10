#include<iostream>
using namespace std;
int main()
{
     int count =1;
     for(int i=1;i<=5;i++)
     {
        for(int j=1;j<=5;j++)   
        {
            cout<<count<<" ";//1 ,2,3,4,5 aise hi 5 row print hoga number 25 tak      
            
            count++;  
        }
        cout<<endl;  
     }
}