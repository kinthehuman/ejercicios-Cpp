#include <iostream>

//using namespace std

double factorial(int a){

	double result = 1;
	int i = 2;
	while (i <= a){
        	result = result*i;
		i++;
	}
	
	return result;

}

int main(){


	int num1 = 0;
	int errores = 0;
	
	std::cout << "\nIntroduzca el nivel de precisión que desea (un número entero entre 0 y 25): \n\n";
	std::cin >> num1;
	
	while (num1 < 0 || num1 > 25){
		std::cout <<"\n\n" << num1 << " no es un número entre 0 y 25, por favor introduzca un numero válido:\n\n";
		std::cin >> num1;
		errores++;
		if(errores > 10){
			std::cout <<"\n\nERROR\n\n";
			return 0;
		}
	}
	
	double e = 1;
	int i = 1; 
	while(i <= num1){
		e = e + 1/(factorial(i));
		i++;
	}
	
	
	std::cout << "\n\nRESULTADOS: \n\n";
	
	
	std::cout << "e = " << e << "\n\n";

	return 0;
}
