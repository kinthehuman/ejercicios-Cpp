#include <iostream>

//using namespace std


int main(){


	float num1;
	float num2;
	
	std::cout << "\nIntroduzca un número: \n";
	std::cin >> num1;
	
	std::cout << "Introduzca otro número: \n";
	std::cin >> num2;
	
	std::cout << "\n\nRESULTADOS: \n\n";
	
	std::cout << "Suma: " << num1 << " + " << num2 << " = " << num1+num2 << "\n";
	std::cout << "Producto: " << num1 << " x " << num2 << " = " << num1*num2 << "\n";
	std::cout << "Diferencia: " << num1 << " - " << num2 << " = " << num1-num2 << "\n";
	std::cout << "Cociente: " << num1 << " : " << num2 << " = " << num1/num2 << "\n\n";

	return 0;
}
