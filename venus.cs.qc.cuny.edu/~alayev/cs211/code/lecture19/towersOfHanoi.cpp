// towersOfHanoi.cpp

#include <iostream>
#include <fstream>

void moveDisks(int numberOfDisks,
               int sourcePile,
               int destinationPile,
               int otherPile,
               int depth,
               ostream& out);

int main()
{
   char outputFileName[] = "hanoiMoves.txt";
   ofstream outFile;
   outFile.open(outputFileName);

   cout <<  "Enter number of disks:  ";
   int disks;
   cin >> disks;

   outFile <<"Moves for a Towers of Hanoi game with "
               << disks << " disks:" << endl << endl;

   moveDisks(disks, 1, 3, 2, 0, outFile);

   cout << outputFileName << " has been generated." << endl;
}  // function main()

void moveDisks(int numberOfDisks,
               int sourcePile,
               int destinationPile,
               int otherPile,
               int depth,
               ostream& out)
{
   if ( numberOfDisks > 0 )  {
      moveDisks(numberOfDisks-1,
                sourcePile, otherPile, destinationPile,
                depth + 1, out);

      static int callsToThisFunction = 0;

      for ( int i = 0; i < depth; i++ )
         out << "  ";
      out << ++callsToThisFunction << ". ";
      out << "Move disk #" << numberOfDisks
                  << " from pile " << sourcePile
                  << " to pile " << destinationPile
                  << "." << endl;

      moveDisks(numberOfDisks-1,
                otherPile, destinationPile, sourcePile,
                depth + 1, out);
   }  // if
}  // function moveDisks(int, int, int, int, int, ostream&)

