#include "tiv.hpp"

Number tvierkar(Number h,Number c ){
	Number k=h/10;
	if (k<1){
		return c+1;
	}else{
		return tvierkar(k,c+1);
	}
}


