/*
 * ex9_31.cpp - The program on page 354 to remove even-valued elements and duplicate
 * odd ones will not work on a list or forward_list. Why? Revise the program so that
 * it works on these types as well.
 *
 *  Created on: Jul 5, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <list>
#include <forward_list>

void remove_or_double( std::list<int> &lst ) {
  auto iter = lst.begin();

  while (iter != lst.end()) {
      if (*iter % 2) {
	  iter = lst.insert(iter, *iter);

	  // On page 354, with a vector it is possible to use += 2 to increment the iterator
	  // whereas it's not possible with a list or forward_list. Use std::advance(iter, n)
	  std::advance(iter, 2);
      } else {
	  iter = lst.erase(iter);
      }
  }
}

void remove_or_double( std::forward_list<int> &lst ) {

  // With forward_list, prefer to use a for loop in order to prevent invalidated iterators.
  // Also, a prev iterator is required in order to insert_after.
  for ( auto curr = lst.begin(), prev = lst.before_begin(); curr != lst.end(); ) {
      if (*curr % 2) {
	  curr = lst.insert_after(prev, *curr);
	  std::advance(curr, 2);
	  std::advance(prev, 2);
      } else {
	  curr = lst.erase_after(prev);
      }
  }
}

int main( int argc, char** argv ) {
  std::list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  remove_or_double( lst );

  std::cout << "Contents of list: " << std::endl;

  for (auto elem : lst) {
      std::cout << elem << std::endl;
  }

  std::cout << std::endl << std::endl;

  remove_or_double( flst );
  std::cout << "Contents of forward_list: " << std::endl;

  for (auto elem : flst) {
      std::cout << elem << std::endl;
  }

  return 0;
}


