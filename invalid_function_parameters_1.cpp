/*
* NOTE: A bitset is a dataset that stores multiple boolean values but takes lesser memory space 
*as compared to other data sets that can store a sequence of bits like a boolean array or 
*boolean vector. Bitsets stores the binary bits in a form that takes less memory space, 
*it stores them in compressed from.
*/

// invalid_argument example
#include <iostream>       // std::cerr
#include <stdexcept>      // std::invalid_argument
#include <bitset>         // std::bitset
#include <string>         // std::string

int main (void) {
  try {
    // bitset constructor throws an invalid_argument if initialized
    // with a string containing characters other than 0 and 1
    std::bitset<5> mybitset (std::string("01234"));
  }
  catch (const std::invalid_argument& ia) {
	  std::cerr << "Invalid argument: " << ia.what() << '\n';
  }
  return 0;
}
