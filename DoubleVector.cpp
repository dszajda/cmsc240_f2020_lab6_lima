#ifndef __DOUBLE_VECTOR_CPP__
#define __DOUBLE_VECTOR_CPP__

#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

DoubleVector::DoubleVector()  {}
DoubleVector::~DoubleVector() {}

int DoubleVector::size() 
{
   return doubleVector.size();
}

// just return the double at the specified index; use the at() method rather
// than [] so that an out_of_range error will be thrown for an invalid index
double DoubleVector::get(int index) 
{ 
   return doubleVector.at(index);
}

// if index is size-legitimate, put the value at that index;
// otherwise, use push_back to append to the end of the vector
void DoubleVector::put(double value, int index)
{
   if((unsigned int)index < doubleVector.size() && index > -1)
   {
	doubleVector.at(index) = value;
   }
   else
   {
	doubleVector.push_back(value);
   }
}

// use push_back to append
void DoubleVector::put(double value)
{
   doubleVector.push_back(value);
}

// for each character in characteVector, use static_cast<double> to append as a
// double to doubleVector
void DoubleVector::appendCharacterVector(CharacterVector& characterVector)
{
   for(int i = 0; i < characterVector.size(); i++)
   {
	doubleVector.push_back(static_cast<double>(characterVector.get(i)));
   }
}

// for each integer in integerVector, use static_cast<double> to append as a
// double to doubleVector
void DoubleVector::appendIntegerVector(IntegerVector& integerVector)
{
   for(int i = 0; i < integerVector.size(); i++)
   {
        doubleVector.push_back(static_cast<double>(integerVector.get(i)));
   }
}

#endif
