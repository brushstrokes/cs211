// Node.h

// Note:  All function definitions are inline

#ifndef NODE_H
#define NODE_H

namespace DonathList {

   #ifndef NULL
   #define NULL 0
   #endif

   template <class T>
   class Node {
      public:
         Node() { data = 0; next = NULL; }
         Node(T i) {data = i; next = NULL; }
         Node(T i, Node* n) {data = i; next = n; }
         
         T data;
         Node<T>* next;
   };
}

#endif;
