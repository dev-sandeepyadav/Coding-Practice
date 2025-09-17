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
        for(int j=i;j>=1;j--)  
        {
            cout<< j<<" " ;
        }
        cout<<endl;
    }
}
<<<<<<< HEAD
//           1
//         2 1
//       3 2 1
//     4 3 2 1
//   5 4 3 2 1 upto n number           
=======

//          A
//       B  A
//    C  B  A will output generated its depend on input 
>>>>>>> 429b76542239517fb63b52e363f95478f448264d
