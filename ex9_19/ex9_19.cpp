/*
 * ex9_19.cpp - Rewrite the program from the previous exercise to use a
 * list. List the changes you needed to make.
 *
 *  Created on: Jul 3, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <list>

int main( int argc, char** argv ) {
  /**
   * The only changes required were changing container type from deque to
   * list.
   */
  std::list<std::string> words;

  std::cout << "Enter words (followed by \n and CTRL-D): ";
  std::string word;

  while ( std::cin >> word ) {
      words.push_back(word);
  }

  std::cout << std::endl;
  std::cout << "Contents of the list: " << std::endl;

  for ( auto it = words.cbegin(); it != words.cend(); ++it ) {
      std::cout << *it << std::endl;
  }
  return 0;
}


