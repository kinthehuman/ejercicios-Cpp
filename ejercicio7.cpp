#include <iostream>

//using namespace std

int main(){


	int num1 = 0;
	int errores = 0;
	
	std::cout << "\nIntroduzca un número de 5 cifras: \n\n";
	std::cin >> num1;
	
	while (10000 > num1 || num1 > 99999){
		std::cout <<"\n\n" << num1 << " no es un número de 5 cifras. Por favor, introduzca un número de 5 cifras:\n\n";
		std::cin >> num1;
		errores++;
		if(errores > 10){
			std::cout <<"\n\nERROR\n\n";
			return 0;
		}
	}
	
	int cifras[5];
	
	for (int i = 0; i < 5; i++){
        	cifras[i] = num1%10;
        	num1 = (num1-num1%10)/10;
	}
	
	std::cout << "\n\nRESULTADOS: \n\n";
	
	for (int i = 1; i <= 5; i++){
        	std::cout << cifras[5-i] << " ";
	}
	
	std::cout << "\n\n";

	return 0;
}
