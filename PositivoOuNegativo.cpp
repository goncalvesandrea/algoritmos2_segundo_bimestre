#include <iostream>


int funcao1(int parametro){
	
	if (parametro){
	return 1;
	}
	return 0;
}
int main(){

	int n1, n2, n3;
	std::cin >> n1;
	std::cin >> n2;
	std::cin >> n3;
	if(funcao1(n1, n2, n3)){
		std::cout << "\nPositivo";
	}else {
		std::cout << "\nNegativo";
	}
	
	return 0;
}