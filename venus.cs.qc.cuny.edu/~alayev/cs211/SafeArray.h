#ifndef SAFE_ARRAY_H
#define SAFE_ARRAY_H

#include <iostream>
#include <cstdlib>

using namespace std;

template <class T>
class SafeArray
{
   private:
      T* array;
      int size;

   public:
      SafeArray(int s);
      SafeArray();
      T& operator [] (int index);
      int length() const;
      ~SafeArray();
      SafeArray(const SafeArray<T>& other);
      SafeArray<T>& operator = (const SafeArray<T>& other);
};

template <class T>
SafeArray<T>::SafeArray() : array(NULL), size(0)
{
   // empty
}

template <class T>
SafeArray<T>::SafeArray(int s) : size(s)
{
   if (size < 0)
   {
      cout << "Array size cannnot be negative." << endl;
      exit(1);
   } 
   array = new T[size];
}

template <class T>
T& SafeArray<T>::operator [] (int index)
{
   if (index < 0 || index >= size)
   {
      cout << "Array index: " << index << " is out of bounds." 
           << endl;
      exit(1);
   }
   return array[index];
}

template <class T>
int SafeArray<T>::length() const
{
   return size;
}

template <class T>
SafeArray<T>::~SafeArray()
{
   if (array != NULL)
   {
      delete [] array;
      array = NULL;
   }
}

template <class T>
SafeArray<T>::SafeArray(const SafeArray<T>& other) : size(other.size)
{
   array = new T[size];

   for (int i = 0; i < size; i++)
   {
      array[i] = other.array[i];
   }
}

template <class T>
SafeArray<T>& SafeArray<T>::operator = (const SafeArray<T>& other)
{
   if (this != &other)
   {
      if (array != NULL)
      {
         delete [] array;
         array = NULL;
      }
      size = other.size;
      array = new T[size];
      for (int i = 0; i < size; i++)
      {
         array[i] = other.array[i];
      }
   }
   return *this; 
}

#endif
