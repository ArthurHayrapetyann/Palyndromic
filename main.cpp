#include <iostream>
#include "tiv.hpp"
int main(){ 

	std::cout << "tiv" << std::endl;
	Number tiv;
	std::cin >> tiv;
	Number erk = tvierkar(tiv,0);
	isPalyndromicRec(tiv,erk);	
}
