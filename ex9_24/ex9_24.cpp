/*
 * ex9_24.cpp - Write a program that fetches the first element in a vector using at, the subscript
 * operator, front, and begin. Test your program on an empty vector.
 *
 *  Created on: Jul 5, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <vector>
#include <exception>

int main( int argc, char** argv ) {
  std::vector<std::string> strings{"Richard", "Jacqueline", "Eleanor"};

  std::cout << "Accessing first element of valid vector: " << std::endl;
  std::cout << "Using .at: " << strings.at(0) << std::endl;
  std::cout << "Using []: " << strings[0] << std::endl;
  std::cout << "Using .front: " << strings.front() << std::endl;
  std::cout << "Using .begin: " << *strings.begin() << std::endl;

  //strings.clear();

  std::vector<int> numbers;

  try {
      std::cout << "Accessing first element of empty vector: " << std::endl;
      std::cout << "Using []: " << numbers[0] << std::endl;
      std::cout << "Using .front: " << numbers.front() << std::endl;
      std::cout << "Using .begin: " << *numbers.begin() << std::endl;
      std::cout << "Using .at: " << numbers.at(0) << std::endl;
  } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
  }

  return 0;
}


