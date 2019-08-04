// testBinarySearch.cpp

#include "functionDemo.h"
#include <cstdio>
#include <string>

const int MAX_LENGTH = 256;

int main(int argc, char* argv[]) {
   if (argc < 2) {
      cout << "Enter, as command line arguments: "
                << "contents of array, "
                << "then value to search for." << endl;
      return 0;
   }

   int nums[argc-2];
   for( int i = 1; i < argc-1; i++)
   {
      if (!sscanf(argv[i], "%d", nums + i - 1))  {
         cout << "Input error at argument " << i << endl;
         return 1;
      }  // if
   }  // for i

   int toFind;
   if (!sscanf(argv[argc-1], "%d", &toFind))  {
      cout << "Input error at argument " << (argc-1) << endl;
      return 1;
   }  // if

   cout << "Contents of array: ";
   for (int j = 0; j < argc-2; j++)
      cout << nums[j] << " ";
   cout << endl;

   for (int j = 0; j < argc-3; j++)
      if ( nums[j] > nums[j+1] )  {
         cout << "Element at " << j << ", " << nums[j] << ", >"
                 << "element at" <<  (j+1) << ", " << nums[j+1]
                 << ".  Can't do binary search." << endl;
         return 1;
      }  // if

   int index = binarySearch(nums, toFind, 0, argc - 2);

   if ( index == -1 )
      cout << toFind << " was not found.";
   else
      cout << toFind << " was found at " << index;
   cout << endl;
   return 0;
}  // function main
