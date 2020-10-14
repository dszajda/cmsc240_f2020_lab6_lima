#ifndef __DOUBLE_VECTOR_CPP__
#define __DOUBLE_VECTOR_CPP__

#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

DoubleVector::DoubleVector()  {}
DoubleVector::~DoubleVector() {}

int DoubleVector::size() 
{
   return 0;
}

// just return the double at the specified index; use the at() method rather
// than [] so that an out_of_range error will be thrown for an invalid index
double DoubleVector::get(int index) 
{ 
<<<<<<< HEAD
   return 0.0;
=======
   return 0;
>>>>>>> a5160144adf09aa183aac9b2662dc8ba0b640ea9
}

// if index is size-legitimate, put the value at that index;
// otherwise, use push_back to append to the end of the vector
void DoubleVector::put(double value, int index)
{
}

// use push_back to append
void DoubleVector::put(double value)
{
}

// for each character in characteVector, use static_cast<double> to append as a
// double to doubleVector
void DoubleVector::appendCharacterVector(CharacterVector& characterVector)
{
}

// for each integer in integerVector, use static_cast<double> to append as a
// double to doubleVector
void DoubleVector::appendIntegerVector(IntegerVector& integerVector)
{
}

#endif
