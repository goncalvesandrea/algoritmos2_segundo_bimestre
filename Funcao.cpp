#include <iostream>

//escopo global
//int numero;


int funcao1(int parametro){
	
	if (parametro % 2 == 0){
	std::cout << parametro;
	return 1;
	}
	return 0;
}
int main(){
	//escopo de função

	int numero;
	std::cin >> numero;
	if(funcao1(numero)){
		std::cout << "\nPar";
	}else {
		std::cout << "\nImpar";
	}
	
	return 0;
}