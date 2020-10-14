#include <iostream>
#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

int main()
{
   CharacterVector cv;
   DoubleVector    dv;
   IntegerVector   iv;

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << "----------------" << std::endl;

    std::cout<< "Test put() method - put a, b, and c in the vector." << std::endl;
    cv.put('a');
    cv.put('b');
    cv.put('c');

std::cout<< "Display results of our new vector and test get method: " << std::endl;

for(int i=0; i < cv.size(); i++){
   std::cout << cv.get(i) << std::endl;
   }

std::cout<< "Testing the other put method with two parameters: output should be a z c" << std::endl;
cv.put( 'z', 1);

for(int i=0; i < cv.size(); i++){
   std::cout << cv.get(i) << std::endl;
 } 

std::cout<< "Print size: " << std::endl;
std::cout << cv.size() << std::endl;

std::cout<<"Testing out-of-range: Attempt to put 'd' at position 3. Output should be out of range." << std::endl;

cv.put(3, 'd'); // The values in the vector at this point are a, z, c, adding d at 3 should be out of range.

std::cout<<"Testing out-of-range for get method: Attempt to get() something at index 10. Output should be out of range." << std::endl;
cv.get(10); //Result should be out of range.

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   std::cout << "-------------" << std::endl;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;
   std::cout << "--------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
