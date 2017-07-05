/*
 * ex9_16.cpp - Repeat ex9_15, but compare elements in a list<int> to a vector<int>
 *
 *  Created on: Jul 3, 2017
 *      Author: rcornish4
 */

#include <iostream>
#include <list>
#include <vector>

int main( int argc, char** argv ) {
  std::list<int> li{1, 3, 5, 7};
  std::vector<int> vec{1, 3, 5, 7};
  std::vector<int> vec1{1, 3, 5};

  //std::vector<int> newVec(li.begin(), li.end());

  //std::cout << (vec == newVec) ? "true" : "false";

  std::cout << (std::vector<int>(li.begin(), li.end()) == vec ? "true" : "false") << std::endl;
  std::cout << (std::vector<int>(li.begin(), li.end()) == vec1 ? "true" : "false") << std::endl;
  std::cout << std::endl;

  return 0;
}


