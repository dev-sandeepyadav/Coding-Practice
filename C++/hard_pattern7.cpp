#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"user input number";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
<<<<<<< HEAD
}
//    * * * * * * * *  *
//      * * * * * * *
//        * * * * *     
//          * * *
//            *      output generated  of this code for input 5 
=======
    
}
//              1
//           1  2  1
//        1  2  3   2  1
//      1  2  3  4  3   2   1
//   1  2  3   4  5  4  3   2   1 output generated 
>>>>>>> f99fe0e13a9649419108aa2dcaa2776884ce6734
