#include <iostream>
using namespace std;
main()
{
 int i, j, n;
 cout<<"Masukkan batas atas segitiga : ";
 cin>>n;
 for (i=1; i<=n; i++)
 {
 for (j=1; j<=i; j++)
 {
 cout<<j;
 }
 cout<<endl;
 }

}