#ifndef __CHARACTER_VECTOR_CPP__
#define __CHARACTER_VECTOR_CPP__

#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"
#include <iostream>
#include <stdexcept>      // std::out_of_range

CharacterVector::CharacterVector()  {}
CharacterVector::~CharacterVector() {}

int CharacterVector::size() 
{
   return characterVector.size();
}

// just return the character at the specified index; use the at() method rather
// than [] so that an out_of_range error will be thrown for an invalid index
char CharacterVector::get(int index) 
{ 
   	try { return  characterVector.at(index); 
	}
	catch (const std:: out_of_range& oor) {
	std::cerr<< "Out of range error: " << oor.what() << std::endl;
	return 'x';
	}
}

// if index is size-legitimate, put the value at that index;
// otherwise, use push_back to append to the end of the vector
void CharacterVector::put(char value, int index)
{
	if (index>=0 && index < static_cast<int>(characterVector.size())){
	characterVector[index] = value;
	}
	else { 
	std::cout << "Out of range. Character appended to back of vector." << std::endl;
	characterVector.push_back(value); }
}

// use push_back to append
void CharacterVector::put(char value)
{
characterVector.push_back(value);
}

// for each double in doubleVector, use static_cast<char> to append as a
// character to characterVector
void CharacterVector::appendDoubleVector(DoubleVector& doubleVector)
{
	for (int i = 0; i < doubleVector.size(); i++){
	characterVector.push_back(static_cast<char>(doubleVector.get(i)));
	}
}

// for each integer in integerVector, use static_cast<char> to append as a
// character to characterVector
void CharacterVector::appendIntegerVector(IntegerVector& integerVector)
{
	for (int i = 0; i < integerVector.size(); i++){
        characterVector.push_back(static_cast<char>(integerVector.get(i)));
        }
}

#endif
