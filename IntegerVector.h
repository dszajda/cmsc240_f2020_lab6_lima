#ifndef __INTEGER_VECTOR_H__
#define __INTEGER_VECTOR_H__

#include <vector>

// forward declarations
class CharacterVector;
class DoubleVector;

class IntegerVector
{
   private:
      std::vector<int> integerVector;

   public:
      IntegerVector();
      ~IntegerVector();

      int  size();
      int  get(int index);
      void put(int value, int index);
      void put(int value);

      void appendCharacterVector(CharacterVector& characterVector);
      void appendDoubleVector(DoubleVector& doubleVector);
};

#endif
