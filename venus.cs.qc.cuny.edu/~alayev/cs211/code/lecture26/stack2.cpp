//This is the implementation file stack2.cpp.
//This is the implementation of the template class Stack.
//The interface for the template class Stack is in the header file stack2.h.
//This program is the array implementation of stacks

#include <iostream>
#include <cstdlib>
#include <cstddef>
#include "stack2.h"
using std::cout;


namespace StackDonath
{
 
   //Uses cstddef:
    template<class T>
    Stack<T>::Stack( ) : top(-1), capacity(8)
    {
       array = new T[capacity];
    }

    //Uses cstddef:
    template<class T>
    Stack<T>::Stack(const Stack<T>& aStack)
    {
       capacity = aStack.capacity;
       top = aStack.top;
       array = new T[capacity];
       for (int i = 0; i <= top; i++)
          array[i] = aStack[i];
    }

    template<class T>
    Stack<T>& Stack<T>::operator =(const Stack<T>& rightSide)
    {
       if (this == &rightSide)
          return *this;
       if (capacity != rightSide.capacity) {
          delete [] array;
          capacity = rightSide.capacity;
          array = new T[capacity];
       }
       top = rightSide.top;
       for (int i = 0; i <= top; i++)
          array[i] = rightSide.array[i];
       return *this;
    }

    template<class T>
    Stack<T>::~Stack( )
    {
       delete [] array;
    }

    //Uses cstddef:
    template<class T>
    bool Stack<T>::isEmpty( ) const
    {
        return (top < 0);
    }

    template<class T>
    void Stack<T>::push(T stackFrame)
    {
       if (top >= capacity - 1)
          grow();
       array[++top] = stackFrame;
    }

    //Uses cstdlib and iostream:
    template<class T>
    T Stack<T>::pop( ) throw (StackEmpty)
    {
        if (isEmpty( ))
            throw StackEmpty("Error: popping an empty stack.\n");
        if (top < capacity / 2)
           shrink();

        return array[top--];
    }

    template<class T>
    void Stack<T>::grow() {
       capacity = (capacity + 1) * 2;
       T* temp = new T[capacity];
       for (int i = 0; i <= top; i++)
          temp[i] = array[i];
       delete array;
       array = temp;
    }

    template<class T>
    void Stack<T>::shrink() {
       capacity = (capacity + 1) / 2;
       T* temp = new T[capacity];
       for (int i = 0; i <= top; i++)
          temp[i] = array[i];
       delete array;
       array = temp;
    }

}//StackDonath

 
