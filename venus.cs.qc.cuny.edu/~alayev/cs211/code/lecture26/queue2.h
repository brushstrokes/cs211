
//This is the header file queue2.h. This is the interface for the class Queue,
//which is a template class for a queue of items of type T.
#ifndef QUEUE_H
#define QUEUE_H

#include <string>
using std::string;

namespace QueueDonath
{

    class QueueEmpty {
       public:
          QueueEmpty() { message = ""; }
          QueueEmpty(const char* msg) { message = msg; }
          QueueEmpty(string msg) { message = msg; }
          string getMessage() {return message;}
       private:
          string message;
    };

    template<class T>
    class Queue
    {
    public:
        Queue( );
        //Initializes the object to an empty queue.

        Queue(const Queue<T>& aQueue);

        Queue<T>& operator =(const Queue<T>& rightSide);

        virtual ~Queue( );

        void add(T item);
        //Postcondition: item has been added to the back of the queue.

        T remove( ) throw (QueueEmpty);
        //Precondition: The queue is not empty.
        //Returns the item at the front of the queue
        //and removes that item from the queue.

        bool isEmpty( ) const;
        //Returns true if the queue is empty. Returns false otherwise.
    private:
        T *array; 
        int front, end, capacity;
        bool empty;
        void grow();
        void shrink();
    };

}//QueueDonath

#endif //QUEUE_H


