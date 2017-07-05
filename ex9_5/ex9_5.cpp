/*
 * ex9_5.cpp
 *
 *  Created on: Jun 29, 2017
 *      Author: rcornish
 */

#include <iostream>
#include <vector>

std::vector<int>::const_iterator findElement(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end,
		int value) {

	for ( ; begin != end; ++begin ) {
		if (*begin == value) {
			return begin;
		}
	}

	return end;

}


int main( int argc, char** argv ) {
	std::vector<int> intVec {25, 10, 3, 5, 100};
	int value;

	while(true){
		std::cout << "Enter a number: ";
		std::cin >> value;

		auto elementIt = findElement( intVec.begin(), intVec.end(), value );

		if ( elementIt != intVec.end() ){
			std::cout << "Value: " << value << " located at position " << elementIt - intVec.begin();
		} else {
			std::cout << "Value: " << value << " is not in the vector.";
		}

		std::cout << std::endl;
	}


	return 0;
}


