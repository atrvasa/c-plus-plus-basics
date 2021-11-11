#include <iostream>
using namespace std;

// Global variable
float bb = 90.0009;
  
int main () {
   float b; // local variable
 
   b = 80.0/2.6;
   cout << "b = " << b << endl ;

   int i, j; // local variable
   int x; // local variable

   i = 89;
   j = 6;
   x = i + j;
 
   cout << "x = " << x << endl ;

   double xx = 94000.901;

   cout << xx * x << endl;

   //print global variable
   cout << bb << endl;
 
   return 0;
}