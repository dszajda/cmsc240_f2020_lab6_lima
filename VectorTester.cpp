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
   //test put() without an index
   dv.put(121.0);
   dv.put(97.0);

   // test get() with valid indices
      std::cout << "Output: " << dv.get(0) << " " << dv.get(1) << " [121 97]" << std::endl;
      std::cout << std::endl;  

   // test put() with a given index
   dv.put(72.0, 0);
   dv.put(33.0, 1);
   dv.put(105.0, 1);

   // test get() with valid indices   
   std::cout << "Output: " << dv.get(0) << " " << dv.get(1) << " " << dv.get(2) << " " << dv.get(3) << " " << dv.get(4) << " [72 105 33 121 97]" << std::endl;
   std::cout << std::endl;
 
   // test size()
   std::cout << "Size of DoubleVector: " << dv.size() << "[5]" << std::endl;
   std::cout << std:: endl;

   // test get() with invalid index to catch out_of_range exception 
   try {
	throw dv.get(-1);
   }
   catch (...) {
	std::cout << "Caught out_of_range exception from get()." << std::endl;
   }	  

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
   
   // test appending IntegerVector to DoubleVector
   dv2.appendIntegerVector(iv);
   for(int i = 0; i < dv2.size(); i++)
   {
	std::cout << dv2.get(i) << " ";
   }
   std::cout << std::endl;
   std::cout << "[expected value depends on value of iv from above]" << std::endl;

   // test appending CharacterVector to DoubleVector
   dv2.appendCharacterVector(cv);
   for(int i = 0; i < dv2.size(); i++)
   {
        std::cout << dv2.get(i) << " ";
   }
   std::cout << std::endl;
   std::cout << "[expected value depends on value of cv from above]" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;
   
//append double vector, dv
   iv2.appendDoubleVector(dv); //double check whether or not it's pointer
   std::cout << "iv2 after appending double vector: " << "[expected depends on state of dv]" << std::endl;
   
//append character vector, cv
    iv2.appendCharacterVector(cv);
    std::cout << "iv2 after appending character vector: " << "[expected depends on state of cv]" << std::endl;
   //-------------------------------------------------------------------------

   return 0;
}
