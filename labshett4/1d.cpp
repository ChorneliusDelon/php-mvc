#include <stdio.h>
#include <iostream>
using namespace std;
main()
{
	int i = 1, x, n;
 cout<<"Masukkan batas atas segitiga : ";
 cin>>n;
 while (i <= n)
 {
 x = 1;
 while (x <= i)
 {
 printf ("%d", x);
 x = x + 1;
 }
 printf ("\n");
 i = i + 1;
 }
} 
