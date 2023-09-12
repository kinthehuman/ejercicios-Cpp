#include <iostream>
#include <vector>

//using namespace std

int main(){


	long num1;
	
	std::cout << "\nIntroduzca un número: \n\n";
	std::cin >> num1;
	
	std::vector<int> cifras;
	
	while (num1 != 0){
		cifras.push_back(num1%10);
		num1 = (num1-num1%10)/10;
	}
	
	std::cout << "\n\nRESULTADOS: \n\n";
	
	for (std::vector<int>::reverse_iterator i = cifras.rbegin(); i != cifras.rend(); i++){
        	std::cout << *i << " ";
	}
	
	std::cout << "\n\n";

	return 0;
}
