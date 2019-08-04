//This is the implementation file queue2.cpp.
//This is the implementation of the template class Queue.
//The interface for the template class Queue is in the header file queue2.h.
//This implements a queue with an array.

#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <cmath>
#include "queue2.h"
using std::cout;


namespace QueueDonath
{

//Uses cstddef:
template<class T>
Queue<T>::Queue( ) : front(0), end(0), empty(true)
{
    capacity = 5;
    array = new T[capacity];
}

//Uses cstddef:
template<class T>
bool Queue<T>::isEmpty( ) const
{
    return empty;
}

//Uses cstddef:
template<class T>
void Queue<T>::add(T item)
{
   if ((front == end) && !empty)
      grow();
   empty = false;
   array[end] = item;
   end = (end + 1) % capacity;
}

//Uses cstdlib and iostream:
template<class T>
T Queue<T>::remove( ) throw (QueueEmpty)
{
    if (empty)
    {
        throw QueueEmpty("Error:Removing an item from an empty queue.\n");
    }
    int size = end - front;
    if (size < 0)
       size = size + capacity;

    if ((size > 5) && (size < capacity / 2))
       shrink();

    T& temp =  array[front];
    front = (front + 1) % capacity;
    if (front == end)
       empty = true;
    return temp;
}

template<class T>
Queue<T>::~Queue( )
{
    delete [] array;
}

//Uses cstddef:
template<class T>
Queue<T>::Queue(const Queue<T>& aQueue)
{
   capacity = aQueue.capacity;
   front = aQueue.front;
   end = aQueue.end;
   empty = aQueue.empty;
   array = new T[capacity];
   for (int i = 0; i < capacity; i++)
      array[i] = aQueue.array[i];
}

//Uses cstddef:
template<class T>
Queue<T>& Queue<T>::operator =(const Queue<T>& rightSide)
{
   if (this == &rightSide)
      return *this;

   capacity = rightSide.capacity;
   front = rightSide.front;
   end = rightSide.end;
   empty = aQueue.empty;
   delete [] array;
   array = new T[capacity];
   for (int i = 0; i < capacity; i++)
      array[i] = rightSide.array[i];
   return *this;
}

template<class T>
void Queue<T>::grow() {
   int newCapacity = capacity * 2 + 1;
   T* temp = new T[newCapacity];
   int j = front;
   int size = end - front;
   if (size <= 0)
      size += capacity;
   for (int i = 0; i < size; i++) {
      temp[i] = array[j];
      j = (j + 1) % capacity;
   }
   delete [] array;
   array = temp;
   end = size;
   capacity = newCapacity;
   front = 0;
}

template<class T>
void Queue<T>::shrink() {
   int newCapacity = capacity / 2 + 1;
   T* temp = new T[newCapacity];
   int j = front;
   int size =  end - front;
   if (size <= 0)
      size +=capacity;
   for (int i = 0; i < size; i++) {
      temp[i] = array[j];
      j = (j + 1) % capacity;
   }
   delete [] array;
   array = temp;
   end = size;
   capacity = newCapacity;
   front = 0;
}

}//QueueDonath
