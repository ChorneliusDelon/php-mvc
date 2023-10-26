#include <stdio.h>
using namespace std;
main()
{
 int i = 1, x;
 do
 {
 x = 1;
 do
 {
 printf ("%3i", x);
 x = x + 1;
 }
 while (x <= i);
 printf ("\n");
 i = i + 1;
 }
 while (i <= 5 );
}
