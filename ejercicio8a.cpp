#include <iostream>

//using namespace std

int main(){


	int num1 = 0;
	int errores = 0;
	
	std::cout << "\nIntroduzca un número entero entre 1 y 25: \n\n";
	std::cin >> num1;
	
	while (num1 < 1 || num1 > 25){
		std::cout <<"\n\n" << num1 << " no es un número entre 1 y 25, por favor introduzca un numero válido:\n\n";
		std::cin >> num1;
		errores++;
		if(errores > 10){
			std::cout <<"\n\nERROR\n\n";
			return 0;
		}
	}
	
	long factorial = 1;
	int i = 2;
	while (i <= num1){
        	factorial = factorial*i;
		i++;
	}
	
	std::cout << "\n\nRESULTADOS: \n\n";
	
	
	std::cout << num1 << "! = " << factorial << "\n\n";

	return 0;
}
