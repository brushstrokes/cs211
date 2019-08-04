// templateSort.cpp

#include <iostream>

using namespace std;

template <class T>
void sort(T* basev, int count,  
          int (*compare)(const T* element1, const T* element2));

int compare(const int* element1, const int* element2) {
   return *element1 - *element2;
}

int main() {
   // Initialize array of n elements
   int array[5] = {5, 3, 0, 8, 7};
   int count = 5;

   cout << "Before sort: ";
   for (int i = 0; i < count; i++)
      cout << array[i];
   cout << endl;

   sort(array, count, compare);

   cout << "After sort: ";
   for (int i = 0; i < count; i++)
      cout << array[i];
   cout << endl;
   exit(0);
}

template <class T>
void swap(T& element1, T& element2) {
     T temp = element1;
     element1 = element2;
     element2 = temp;
}

template <class T>
void sort(T* base, int count,  
          int (*compare)(const T* element1, const T* element2)) {
   for (int i = 0; i < count; i++)
      for (int j = 0; j < count; j++)
         if (compare(base + j, base + j + 1) > 0)
            swap(base[j], base[j+1]);
}
