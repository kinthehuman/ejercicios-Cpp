#include <iostream>

//using namespace std
int menor(int a, int b, int c){
	if(a < b && a < c){
		return a;
	}
	else if (b < c){
		return b;
	}
	else return c;
	
}

int mayor(int a, int b, int c){
	if(a > b && a > c){
		return a;
	}
	else if (b > c){
		return b;
	}
	else return c;
	
}

int main(){


	int num1;
	int num2;
	int num3;
	bool correctos = false;
	int errores = 0;
	
	while(!correctos){
	
		std::cout << "\nIntroduzca tres enteros distintos: ";
		
		std::cin >> num1;
		std::cin >> num2;
		std::cin >> num3;
		
		if(num1 != num2 && num1 != num3 && num2 != num3){
			correctos = true;
		}
		else{
			std::cout << "\n¡¡¡Numeros no validos!!!\n";
			errores++;
			if(errores > 10){
				std::cout <<"\n\nERROR\n\n";
				return 0;
			}
		}
		
		
	}
	
	std::cout << "La suma es " << num1+num2+num3 << "\n";
	std::cout << "El promedio es " << (num1+num2+num3)/3 << "\n";
	std::cout << "El producto es: " << num1*num2*num3 << "\n";
	std::cout << "El menor es: " << menor(num1,num2,num3) << "\n";
	std::cout << "El mayor es: " << mayor(num1,num2,num3) << "\n\n";

	return 0;
}
