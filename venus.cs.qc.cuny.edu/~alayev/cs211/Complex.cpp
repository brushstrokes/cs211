// Complex.cpp (NOT COMPLETE)

// Author: Yosef Alayev 

#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(double x, double y)
{
   a = x;
   b = y;
}

void Complex::setReal(double x)
{
   a = x;
}

void Complex::setImaginary(double y)
{
   b = y;
}

const Complex Complex::add(const Complex& z)
{
   Complex ans(a + z.a, b + z.b);
   return ans;
}

void Complex::output() const
{
   cout << a;
   if (b >= 0)
      cout << "+" << b << "i";
   else
      cout << b << "i";
   cout << endl; 
}
