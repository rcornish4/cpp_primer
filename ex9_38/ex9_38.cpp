/*
 * ex9_38.cpp - Write a program to explore how vectors grow in the library you use.
 *
 *  Created on: Jul 5, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <vector>

void print( std::vector<int> &vec ) {
  std::cout << "Vector size: " << vec.size() << std::endl;
  std::cout << "Vector capacity: " << vec.capacity() << std::endl;
}

int main( int argc, char** argv ) {
  std::vector<int> test;

  print( test );

  test.push_back(1);
  // size will be 1, capacity will be >= 1
  print( test );

  for (unsigned i = 0; i < 100; ++i) {
      test.push_back(i);
      print( test );
  }

  test.shrink_to_fit();

  print( test );
  return 0;
}


