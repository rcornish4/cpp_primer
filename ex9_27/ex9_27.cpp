/*
 * ex9_27.cpp - Write a program to find and remove the odd-valued elements in a forward_list<int>.
 *
 *  Created on: Jul 5, 2017
 *      Author: rcornish
 */

#include<iostream>
#include<forward_list>

void remove_odds( std::forward_list<int> &flist ) {
  auto is_odd = []( int i ) { return i & 0x1; };

  flist.remove_if( is_odd );
}

int main( int argc, char** argv ) {
  std::forward_list<int> flist{0, 1, 2, 3, 4, 5, 6, 7, 8 , 9 , 10, 11};

  remove_odds(flist);

  std::cout << "Contents of list: " << std::endl;

  for ( auto num : flist ) {
      std::cout << num << std::endl;
  }

  return 0;
}


