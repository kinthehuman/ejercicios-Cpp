#include <iostream>
#include <math.h>

//using namespace std

int main(){

	double result = 0;
	
	//std::cout << "\n\nRESULTADOS: \n\n";
	
	
	
	for(int i = 0; i < 1000; i++){
		result = result + (4.0/(1.0 + 2.0*i)*pow(-1.0, i));
		std::cout << i+1 << "\t" << result << "\n";
	}
	

	return 0;
}
