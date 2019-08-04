// Rat_Main.cpp
// Test my Rat class

// Author: Yosef Alayev

#include "Rat.h"
#include <iostream>

using namespace std;

int main()
{
   Rat r1, r2(3), r3(1,2);
   cin >> r1;

   cout << "r1=" << r1 << endl;
   cout << "r2=" << r2 << endl;
   cout << "r3=" << r3 << endl;  

   cout << "r1+r2=" << r1 + r2 << endl;
   cout << "r1-r2=" << r1 - r2 << endl;
   cout << "r1*r2=" << r1 * r2 << endl;
   cout << "r1/r2=" << r1 / r2 << endl;
   cout << "Reduce r1=" << r1.reduce() << endl << endl; 

   Rat r4, r5;
   cout << "Input r4 and r5: ";
   cin >> r4 >> r5;

   // Test < operator
   if (r4 < r5)
   {
      cout << "r4 < r5" << endl;
   }
   else 
   {
      cout << "r4 is not < r5" << endl;
   }

   // Test > operator
   if (r4 > r5)
   {
      cout << "r4 > r5" << endl;
   }
   else     
   {
      cout << "r4 is not > r5" << endl;
   }

   // Test == operotor
   if (r4 == r5)
   {
      cout << "r4 == r5" << endl;
   }
   else     
   {
      cout << "r4 is not == r5" << endl;
   }

   // Test != operator
   if (r4 != r5)
   {
      cout << "r4 != r5" << endl;
   }
   else     
   {
      cout << "r4 is not != r5" << endl;
   }

   // Test <= operator
   if (r4 <= r5)
   {
      cout << "r4 <= r5" << endl;
   }
   else     
   {
      cout << "r4 is not <= r5" << endl;
   }

   // Test >= operator
   if (r4 >= r5)
   {
      cout << "r4 >= r5" << endl;
   }
   else     
   {
      cout << "r4 is not >= r5" << endl;
   }





   

   
   return 0;
}
