#include <iostream>
#include <math.h>


//using namespace std

double factorial(int a){

	double result = 1;
	int i = 2;
	while(i <= a){
        	result = result*i;
		i++;
	}
	
	return result;

}

int main(){


	int num1 = 0;
	int x = 0;
	int errores1 = 0;
	int errores2 = 0;
	
	std::cout << "\nIntroduzca el valor de x un número entero positivo: \n\n";
	std::cin >> x;
	
	while (num1 < 0 || num1 > 25){
		std::cout <<"\n\n" << x << " no es un número entero positivo, por favor introduzca un numero válido:\n\n";
		std::cin >> x;
		errores2++;
		if(errores2 > 10){
			std::cout <<"\n\nERROR\n\n";
			return 0;
		}
	}
	
	std::cout << "\nIntroduzca el nivel de precisión que desea (un número entero entre 0 y 25): \n\n";
	std::cin >> num1;
	
	while (num1 < 0 || num1 > 25){
		std::cout <<"\n\n" << num1 << " no es un número entre 0 y 25, por favor introduzca un numero válido:\n\n";
		std::cin >> num1;
		errores1++;
		if(errores1 > 10){
			std::cout <<"\n\nERROR\n\n";
			return 0;
		}
	}
	
	double ex = 1;
	int i = 1;
	while(i <= num1){
		ex = ex + pow(x , i)/(factorial(i));
		i++;
	}
	
	
	std::cout << "\n\nRESULTADOS: \n\n";
	
	
	std::cout << "e^" << x << " = " << ex << "\n\n";

	return 0;
}
