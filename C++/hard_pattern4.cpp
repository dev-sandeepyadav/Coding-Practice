#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"input number :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(char j='A';j<='A'+(i-1);j++)
        {
            cout<< j<<" " ;
        }
        cout<<endl;
    }
}

//          A
//       B  A
//    C  B  A will output generated its depend on input 
