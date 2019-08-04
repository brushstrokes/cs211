// Exception.h

#ifndef EXCEPTION_H
#define EXCEPTION_H 

namespace Donath {
class Exception {
   public:
      Exception();

      Exception(const char* x); 

      Exception(const Exception& other);

      virtual ~Exception() { delete [] message; }

      Exception& operator=(const Exception& other);
      
      const char* getMessage() const;

   private:
      char* message;
};

}
#endif
