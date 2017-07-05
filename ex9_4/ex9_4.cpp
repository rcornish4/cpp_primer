/*
 * ex9_4.cpp
 *
 *  Created on: Jun 29, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <vector>

bool isPresent( std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, int value) {
	bool isFound = false;

	/*for ( auto it = begin; it != end; ++it ) {
		if (*it == value) {
			isFound = true;
			break;
		}
	}*/

	for ( ; begin != end; ++begin ) {
		if (*begin == value) {
			return true;
		}
	}

	//return isFound;
	return false;
}

int main( int argc, char** argv ) {
	std::vector<int> intVec {10, 25, 33, 15, 1, 3};
	int value;

	while(true){
		std::cout << "Please enter a number: ";
		std::cin >> value;

		if ( isPresent( intVec.begin(), intVec.end(), value) ) {
			std::cout << "Value: " << value << " is in the vector.";
		} else {
			std::cout << "Value: " << value << " was not found in the vector.";
		}

		std::cout << std::endl;
	}


	return 0;
}


