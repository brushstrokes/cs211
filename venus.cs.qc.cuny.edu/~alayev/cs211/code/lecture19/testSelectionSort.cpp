// testLinearSearch.cpp

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
   for( int i = 1; i < argc; i++)
   {
      if (!sscanf(argv[i], "%d", nums + i - 1))  {
         cout << "Input error at argument " << i << endl;
         return 1;
      }  // if
   }  // for i

   cout << "Contents of array before sorting: ";
   for (int j = 0; j < argc-1; j++)
      cout << nums[j] << " ";
   cout << endl;

   selectionSort(nums, 0, argc - 1);

   cout << "Contents of array after sorting: ";
   for (int j = 0; j < argc-1; j++)
      cout << nums[j] << " ";
   cout << endl;
   return 0;
}  // function main
