/*
 * ex9_26.cpp - Using the following definition of ia, copy ia into a vector and into a list. Use the single-iterator form
 * of erase to remove the elements with odd values from your list and the even values from your vector.
 *
 *  Created on: Jul 5, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <vector>
#include <list>

int main( int argc, char** argv ) {
  int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

  /**
   * This would be preferred way to initialize list and vector, however it's not working
   * for some reason. The push_back loop is a work around.
   */

  std::vector<int> toBeOdd(ia, std::end(ia));
  std::list<int> toBeEven(ia, std::end(ia));

  /*std::vector<int> toBeOdd;
  std::list<int> toBeEven;

  for (int i = 0; i < 10; ++i) {
      toBeOdd.push_back(ia[i]);
      toBeEven.push_back(ia[i]);
  }*/

  for( auto it = toBeOdd.begin(); it != toBeOdd.end(); ) {
      if (!(*it & 0x1)) {
	  it = toBeOdd.erase(it);
      } else {
	  ++it;
      }
  }

  for( auto it = toBeEven.begin(); it != toBeEven.end(); ) {
      if (*it & 0x1) {
	  it = toBeEven.erase(it);
      } else {
	  ++it;
      }
  }

  std::cout << "Contents of odd vector: " << std::endl;

  for( auto it = toBeOdd.begin(); it != toBeOdd.end(); ++it ) {
      std::cout << *it << std::endl;
  }

  std::cout << "\n\nContents of even list: " << std::endl;

  for( auto it = toBeEven.begin(); it != toBeEven.end(); ++it ) {
      std::cout << *it << std::endl;
  }

  return 0;
}



