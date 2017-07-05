/*
 * ex9_18.cpp - Write a program to read a sequence of strings from the
 * standard input into a deque. Use iterators to write a loop to print the
 * elements in the deque.
 *
 *  Created on: Jul 3, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <deque>

int main( int argc, char** argv ) {
  std::deque<std::string> words;

  std::cout << "Enter words: ";
  std::string word;
  while ( std::cin >> word ) {
      words.push_back(word);
  }
  std::cout << std::endl;
  std::cout << "Contents of deque: " << std::endl;

  for ( auto it = words.begin(); it != words.end(); ++it ) {
      std::cout << *it << std::endl;
  }

  return 0;
}



