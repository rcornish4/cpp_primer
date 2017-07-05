/*
 * ex9_41.cpp - Write a program that initializes a string from a vector<char>.
 *
 *  Created on: Jul 5, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <vector>

int main( int argc, char** argv ) {
  std::vector<char> word = {'h', 'e', 'l', 'l', 'o'};

  char *letter = &word[0];

  std::string newWord(letter);

  std::cout << "word: " << newWord << std::endl;

  // another way...  remember strings are containers
  std::string anotherWay(word.begin(), word.end());

  std::cout << "word (another way): " << anotherWay << std::endl;

  return 0;
}


