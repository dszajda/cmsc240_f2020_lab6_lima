#ifndef __DOUBLE_VECTOR_H__
#define __DOUBLE_VECTOR_H__

#include <vector>

// forward declarations
class CharacterVector;
class IntegerVector;

class DoubleVector
{
   private:
      std::vector<double> doubleVector;

   public:
      DoubleVector();
      ~DoubleVector();

      int    size();
      double get(int index);
      void   put(double value, int index);
      void   put(double value);

      void appendCharacterVector(CharacterVector& characterVector);
      void appendIntegerVector(IntegerVector& integerVector);
};

#endif
