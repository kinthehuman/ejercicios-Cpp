#include <iostream>
#include <math.h>

//using namespace std

int main(){
	
	int mid = 9/2;
	int range = 0;
	
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			if(j < (mid - range) || j > (mid + range)){
				std::cout << " ";
			}
			else{
				std::cout << "*";
			}
		}
		std::cout << "\n";
		if(i < mid){
			range++;
		}
		else{
			range--;
		}
		
	}
	

	return 0;
}
