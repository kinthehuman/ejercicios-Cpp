#include <iostream>

//using namespace std


int main(){

	const float pi = 3.14159;
	float radio;
	
	std::cout << "\nIntroduzca el radio: \n";
	std::cin >> radio;

	std::cout << "\n\nRESULTADOS: \n\n";
	
	std::cout << "Diámetro: " << 2*radio << "\n";
	std::cout << "Circumferencia: " << 2*pi*radio << "\n";
	std::cout << "Área: " << pi*radio*radio << "\n";
	
	return 0;
}
