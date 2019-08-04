// functionPoint.cpp

#include <iostream>

using namespace std;

void sort(void* basev, int count, int size, 
          int (*compare)(const void* element1, const void* element2));

int compare(const void *element1, const void *element2) {
   int elem1 = *((int*) element1);
   int elem2 = *((int*) element2);
   if (elem1 > elem2)
      return 1;
   else if (elem1 < elem2)
      return -1;
   return 0;
}

int main() {
   // Initialize array of n elements
   int array[5] = {5, 3, 0, 8, 7};
   int count = 5;
   int size = sizeof(int);

   cout << "Before sort: ";
   for (int i = 0; i < count; i++)
      cout << array[i];
   cout << endl;

   sort(array, count, size, compare);

   cout << "After sort: ";
   for (int i = 0; i < count; i++)
      cout << array[i];
   cout << endl;
   exit(0);
}

void swap(char* element1, char* element2, int size) {
   for (int i = 0; i < size; i++) {
      char temp = element1[i];
      element1[i] = element2[i];
      element2[i] = temp;
   }
}

void sort(void* basev, int count, int size, 
          int (*compare)(const void* element1, const void* element2)) {
   char* base = (char*) basev;
   for (int i = 0; i < count; i++)
      for (int j = 0; j < count; j++)
         if (compare(base + j*size, base + j*size + size) > 0)
            swap(base + j*size, base + j*size + size, size);
}
