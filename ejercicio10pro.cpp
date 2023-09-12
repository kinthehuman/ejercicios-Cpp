#include <iostream>

void imprimir_rombo(int filas){

	if(filas != 1){
			std::cout <<"\n\nROMBO DE " << filas << " FILAS\n\n";
		}
		else{
			std::cout <<"\n\nROMBO DE " << filas << " FILA\n\n";
		}

	int mid = filas/2;
	int range = 0;
		
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < filas; j++){
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

}

int main(){

	
	int num1 = 0;
	int errores = 0;
	
	std::cout << "\nIntroduzca el numero de filas del rombo (un número impar entre 1 y 19): \n\n";
	std::cin >> num1;
	
	while (1 > num1 || num1 > 19 || num1%2 == 0){

		std::cout <<"\n\n" << num1 << " no es un número impar entre 1 y 19.\n";
		std::cout << "Por favor, introduzca un número válido:\n\n";
		std::cin >> num1;

		errores++;

		if(errores > 10){
			std::cout <<"\n\nERROR\n\n";
			return 0;
		}
	}
	
	imprimir_rombo(num1);
	
	std::cout << "\n";

	return 0;
}
