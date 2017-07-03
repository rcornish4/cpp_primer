/*
 * ex9_14.cpp - Write a program to assign the elements from a list of
 * char* pointers to C-style character strings to a vector of strings.
 *
 *  Created on: Jul 2, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <list>
#include <vector>

int main( int argc, char** argv ) {
  std::list<char*> cStyle = {"richard", "jacqueline", "eleanor"};
  std::vector<std::string> newStyle;

  std::list<char*>::iterator beginIt = cStyle.begin();
  std::list<char*>::iterator endIt = cStyle.end();

  std::cout << "List of char* contents: " << std::endl;

  for ( auto it = cStyle.begin(); it != cStyle.end(); ++it ) {
      std::cout << *it << std::endl;
  }

  std::cout << "Vector<string> contents: " << std::endl;

  if ( newStyle.size() == 0 ) {
      std::cout << "Empty vector!" << std::endl;
  } else {
      for ( std::string x : newStyle ) {
	  std::cout << x << std::endl;
      }
  }

  newStyle.assign(beginIt, endIt);

  std::cout << "Vector<string> contents (after assign): " << std::endl;

  if ( newStyle.size() == 0 ) {
      std::cout << "Empty vector!" << std::endl;
  } else {
      for ( std::string x : newStyle ) {
	  std::cout << x << std::endl;
      }
  }

  return 0;
}


