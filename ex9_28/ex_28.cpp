/*
 * ex_28.cpp - Write a function that takes a forward_list<std::string> and two additional
 * std::string arguments. The function should find the first std::string and insert the
 * second immediately following the first. If the first std::string is not found, then
 * insert the second string at the end of the list.
 *
 *  Created on: Jul 5, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <forward_list>

void find_and_insert( std::forward_list<std::string> &names, std::string toFind, std::string toAdd ) {
  auto it = names.begin();
  auto prev = names.before_begin();

  for ( ; ; ) {
      if ( *it == toFind ) {
	  it = names.insert_after(it, toAdd);
	  break;
      } else {
	  ++it;
	  ++prev;

	  if ( it == names.end() ) {
	      names.insert_after(prev, toAdd);
	      break;
	  }
      }
  }
}

void print_list( std::forward_list<std::string> &names ) {
  std::cout << "Contents of list: " << std::endl;

  for ( auto it = names.begin(); it != names.end(); ++it ) {
      std::cout << *it << std::endl;
  }
}

int main( int argc, char** argv ) {
  std::forward_list<std::string> names = {"Richard", "Jacqueline", "Eleanor", "Katherine", "Allison", "Lauren", "Emily"};

  find_and_insert( names, "Eleanor", "Elliot" );
  print_list( names );

  std::cout << std::endl;

  find_and_insert( names, "Jacob", "Richard Jr.");
  print_list( names );

  return 0;
}


