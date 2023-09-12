#include <iostream>

//using namespace std


int main(){


	float num1;
	float num2;
	
	std::cout << "\nIntroduzca un número: \n";
	std::cin >> num1;
	
	std::cout << "Introduzca otro número: \n";
	std::cin >> num2;
	
	std::cout << "\n";
	
	if(num1 > num2){
		std::cout<< num1 << " es más grande\n";
	}
	else if(num1 < num2){
		std::cout<< num2 << " es más grande\n";
	}
	else{
		std::cout<< "Estos números son iguales\n";
	}

	return 0;
}
