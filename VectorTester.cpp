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

   //test get and size on empty vector
   std::cout << "get(0) of empty vector: " << iv.get(0) << "[out of range]" << std::endl;
   std::cout << "size() of empty vector: " << iv.size() << "[0]" <<  std::endl;
   
   //put to append values in vector
   iv.put(0);
   iv.put(1);
   iv.put(2);
   
   //test new size and get
   std::cout << "get(0): " << iv.get(0) << "[0]" <<  std::endl;
   std::cout << "get(1): " << iv.get(1) << "[1]" << std::endl;
   std::cout << "get(2): " << iv.get(2) << "[2]" << std::endl;  
   std::cout << "size(): " << iv.size() << "[3]" << std::endl;

   //test put with indices
   iv.put(3, 0);
   iv.put(2, 1);
   iv.put(1, 2);
   iv.put(11,3); //should append
   iv.put(12, 4); 

   //check new size and get
   std::cout << "get(0): " << iv.get(0) << "[3]" << std::endl;
   std::cout << "get(1): " << iv.get(1) << "[2]" << std::endl;
   std::cout << "get(2): " << iv.get(2) << "[1]" << std::endl;
   std::cout << "get(3): " << iv.get(3) << "[11]" << std::endl;
   std::cout << "get(4): " << iv.get(4) << "[12]" <<  std::endl;
   std::cout << "size(): " << iv.size() << "[5]" << std::endl;

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
   
//append double vector, dv
   iv2.appendDoubleVector(*dv); //double check whether or not it's pointer
   std::cout << "iv2 after appending double vector: " << "[expected depends on state of dv]" <<endl;
   
//append character vector, cv
    iv2.appendCharacterVector(*cv);
    std::cout << "iv2 after appending character vector: " << "[expected depends on state of cv]" <<endl;
   //-------------------------------------------------------------------------

   return 0;
}
