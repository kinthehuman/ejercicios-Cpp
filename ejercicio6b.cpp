#include <iostream>

//using namespace std


int main(){

	for(int i = 0; i <= 7; i++){
		if(i%2 == 0){
			std::cout << "* * * * * * * * \n";
		}
		else{
			std::cout << " * * * * * * * *\n";
		}
	}
	
	return 0;
}
