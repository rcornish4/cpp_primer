/*
 * ex9_15.cpp - Write a program to determine whether two vector<int> are equal.
 *
 *  Created on: Jul 2, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <vector>

int main( int argc, char** argv ) {
  std::vector<int> vec1{1, 3, 5, 7, 9};
  std::vector<int> vec2(10, 5);
  std::vector<int> vec3 = {1, 3, 5, 7, 9, 11};
  std::vector<int> vec4 = {1, 3, 5, 7, 9, 11};

  std::cout << "vec1 < vec2: " <<  (vec1 < vec2) ? "true" : "false";
  std::cout << std::endl;
  std::cout << "vec3 == vec4: " << (vec3 == vec4) ? "true" : "false";
  std::cout << std::endl;
  std::cout << "vec3 < vec1: " << (vec3 < vec1) ? "true" : "false";
  std::cout << std::endl;
  std::cout << "vec3 > vec1: " << (vec3 > vec1) ? "true" : "false";
  std::cout << std::endl;

  return 0;
}


