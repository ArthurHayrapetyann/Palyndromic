#include <iostream>
#include <cmath>
#include "tiv.hpp"


bool isPalyndromicRec(Number tiv, double i){
	Number erkarutyun = tvierkar(tiv,0);
	double k = erkarutyun/2; 
	if (i <= k){
		std::cout << "Palyndromic" << std::endl;
		return true;
	} 
	Number e = tiv/pow(10,i-1);
	Number m = tiv % 10;
	Number f = (tiv-e*pow(10,i-1))/10;
	if(e == m){
		return isPalyndromicRec(f, i-2);
	}else{
		std::cout << "no Palyndromic" << std::endl;
		return false;
	}
}

