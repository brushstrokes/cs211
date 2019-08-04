/* Rat.h
 *
 * Declare class Rat
 *
 * author: Yosef Alayev
 */

#ifndef RAT_H
#define RAT_H

#include <iostream>
using namespace std;

class Rat
{
   private:
      int num;
      int denom;
   public:
      Rat();
      Rat(int n);
      Rat(int n, int d);
      void input();
      void output() const;
      int getNum() const;
      int getDenom() const;
      void setNum(int n);
      void setDenom(int d);
      Rat reduce() const;
      const Rat operator + (const Rat& r) const;
      const Rat operator - (const Rat& r) const;
      const Rat operator * (const Rat& r) const;
      const Rat operator / (const Rat& r) const;
      bool operator == (const Rat& r);
      bool operator != (const Rat& r);
      bool operator < (const Rat& r);
      bool operator > (const Rat& r);
      bool operator <= (const Rat& r);
      bool operator >= (const Rat& r);

      static int gcd(int a, int b);
      static int lcm(int a, int b);

      friend ostream& operator << (ostream& out, const Rat& r);
      friend istream& operator >> (istream& in, Rat& r);
};
#endif
