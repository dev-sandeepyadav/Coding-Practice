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
            cout<<" ";
        }





        for(int j=1;j<=i;j++)
        {
            cout<<i  ;
        }
       
        cout<<endl;
    }
}
//           1
//          22
//         333
//        4444
//       55555
//      666666 output will be generated its depend input
