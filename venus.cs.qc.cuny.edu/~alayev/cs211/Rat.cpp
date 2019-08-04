/* Rat.cpp
 *
 * Define Rat class
 *
 * author: Yosef Alayev
 */

#include "Rat.h"
#include <iostream>
using namespace std;

Rat::Rat()
{
   num = 0;
   denom = 1;
}

Rat::Rat(int n)
{
   num = n;
   denom = 1;
}

Rat::Rat(int n, int d)
{
   num = n;
   if (d == 0)
   {
      cout << "Denominator can not be zero. Terminating." << endl;
      exit(1);
   }
   denom = d;
}
void Rat::input()
{
   cout << "Num: ";
   cin >> num;
   cout << "Denom: ";
   cin >> denom;
   if (denom == 0)
   {
      cout << "Illegal denominator. Terminating the program." << endl;
      exit(1);
   }
}

void Rat::output() const
{
   cout << num << "/" << denom << endl;
}

int Rat::getNum() const
{
   return num;
}

int Rat::getDenom() const
{
   return denom;
}

void Rat::setNum(int n)
{
   num = n;
}

void Rat::setDenom(int d)
{
   if (d == 0)
   {
      cout << "Illegal denominator. Terminating the program." << endl;
      exit(1);
   }
   denom = d;
}

Rat Rat::reduce() const
{
   int g = gcd(num, denom);
   Rat r(num / g, denom / g);
   if (r.denom < 0)
   {
      r.denom = -r.denom;
      r.num = -r.num;
   }
   return r;
}

const Rat Rat::operator + (const Rat& r) const
{
   int l = lcm(denom, r.denom);
   Rat ans(num * l / denom + r.num * l / r.denom, l);
   return ans.reduce();
} 

const Rat Rat::operator - (const Rat& r) const 
{
   int l = lcm(denom, r.denom);
   Rat ans(num * l / denom - r.num * l / r.denom, l);
   return ans.reduce();
}

const Rat Rat::operator * (const Rat& r) const
{
   Rat ans(num * r.num, denom * r.denom);
   return ans.reduce();
}

const Rat Rat::operator / (const Rat& r) const
{
   if (r.num == 0)
   {
      cout << "Can not divide by zero. Terminating." << endl;
   }
   Rat ans(num * r.denom, denom * r.num);
   return ans.reduce();
}

bool Rat::operator == (const Rat& r)
{
   return num * r.denom == denom * r.num; 
}

// fix an error
bool Rat::operator < (const Rat& r)
{
   return num * r.denom < denom * r.num;
}

// fix an error
bool Rat::operator > (const Rat& r)
{
   return num * r.denom > denom * r.num;
}

bool Rat::operator != (const Rat& r)
{
   return num * r.denom != denom * r.num;
}

// fix an error
bool Rat::operator <= (const Rat& r)
{
   return num * r.denom <= denom * r.num;
}

// fix an error
bool Rat::operator >= (const Rat& r)
{
   return num * r.denom >= denom * r.num;
}

int Rat::gcd(int a, int b)
{
   int c;

   while (b != 0 )
   {
     c = a;
     a = b;
     b = c % b;
   }
   return a;
}

int Rat::lcm(int a, int b)
{
   return (a * b) / gcd(a,b);
}

ostream& operator << (ostream& out, const Rat& r)
{
   out << r.num << "/" << r.denom;
   return out;
}

istream& operator >> (istream& in, Rat& r)
{
   cout << "Num: ";
   in >> r.num;
   cout << "Denom: ";
   in >> r.denom;
   while (r.denom == 0)
   {
      cout << "Negative denominator, try again:" << endl;
      cout << "Denom: ";
      in >> r.denom;
   }
   return in;
}

