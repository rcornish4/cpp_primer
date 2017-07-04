/*
 * ex9_20.cpp - Write a program to copy elements from a list<int> into two
 * deques. The even-valued elements should go into one deque and the odd ones
 * into the other.
 *
 *  Created on: Jul 3, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <list>
#include <deque>

int main( int argc, char** argv ) {
  std::list<int> listOfInts{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::deque<int> evenElements, oddElements;

  for ( const int x : listOfInts ) {
      if ( x % 2 == 0 ) {
	  evenElements.push_back(x);
      } else {
	  oddElements.push_back(x);
      }
  }

  std::cout << "Contents of even deque: [ ";

  for ( const int x : evenElements ) {
      std::cout << x << " ";
  }

  std:: cout << "]" << std::endl;

  std::cout << "\nContents of odd deque: [ ";

  for ( const int x : oddElements ) {
      std::cout << x << " ";
  }

  std::cout << "]" << std::endl;

  return 0;
}


