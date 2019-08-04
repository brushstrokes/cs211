//This is the header file stack2.h. This is the interface for the class Stack,
//which is a template class for a stack of items of type T.
//This is the array implementation of a stack.
#ifndef STACK_H
#define STACK_H

#include <string>
using std::string;
namespace StackDonath
{
    class StackEmpty {
       // All function definitions are inline
       public:
          StackEmpty() { message = ""; }
          StackEmpty(string msg) { message = msg;}
          StackEmpty(const char* msg) {message = msg; }
          string getMessage() const { return message; }
       private:
          string message;
    };

    template<class T>
    class Stack
    {
    public:
        Stack( );
        //Initializes the object to an empty stack.

        Stack(const Stack<T>& aStack);

        Stack<T>& operator =(const Stack<T>& rightSide);

        virtual ~Stack( );

        void push(T stackFrame);
        //Postcondition: stackFrame has been added to the stack.

        T pop( ) throw (StackEmpty);
        //Precondition: The stack is not empty.
        //Returns the top stack frame and removes that top 
        //stack frame from the stack.

        bool isEmpty( ) const;
        //Returns true if the stack is empty. Returns false otherwise.
    private:
        T *array;
        int top;
        int capacity;
        void grow();
        void shrink();
    };

}//StackDonath
#endif //STACK_H


