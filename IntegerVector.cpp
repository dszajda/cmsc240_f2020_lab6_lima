#ifndef __INTEGER_VECTOR_CPP__
#define __INTEGER_VECTOR_CPP__

#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"
#include <iostream>

using namespace std;

IntegerVector::IntegerVector()  {}
IntegerVector::~IntegerVector() {}

int IntegerVector::size() 
{
   
   return integerVector.size(); 

}

// just return the integer at the specified index; use the at() method rather
// than [] so that an out_of_range error will be thrown for an invalid index
int IntegerVector::get(int index)  
{ 
try{   
	return integerVector.at(index);
}
catch (const out_of_range& oor) {
	cerr << "Out of range error: " << oor.what() << endl;
	return 0;
}
}

// if index is size-legitimate, put the value at that index;
// otherwise, use push_back to append to the end of the vector
void IntegerVector::put(int value, int index)
{
	if (index >= 0 && index < static_cast<int>(integerVector.size())) {
	integerVector[index] = value;
}else{
	std::cout << "inside put() else statement." << std::endl;
	integerVector.push_back(value);
}
}

// use push_back to append
void IntegerVector::put(int value)
{
	integerVector.push_back(value);
}

// for each char in characterVector, use static_cast<int> to append as an
// integer to integerVector
void IntegerVector::appendCharacterVector(CharacterVector& characterVector)
{
	char charToInt;
	for (int i= 0; i< characterVector.size();i++) {
 		charToInt  = characterVector.get(i);
        	integerVector.push_back(static_cast<int>(charToInt));			
	}	
}

// for each double in doubleVector, use static_cast<int> to append as an
// integer to integerVector
void IntegerVector::appendDoubleVector(DoubleVector& doubleVector)
{
	double doubleToInt;
	for (int i= 0; i< doubleVector.size();i++) {  
		doubleToInt  = doubleVector.get(i);
		integerVector.push_back(static_cast<int>(doubleToInt));
	}
}		

#endif
