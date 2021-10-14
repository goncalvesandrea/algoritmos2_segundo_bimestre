#include <iostream>


int funcao(int n1, int n2, int n3){
	
	if (n1 > n2 and n1 > n3){
	std::cout << "O maior numero e o " << n1;
	}else if (n2 > n1 and n2 > n3){
		std::cout << "O maior numero e o " << n2;
	}else if(n3 > n1 and n3 > n2){
		std::cout << "O maior numero e o " << n3;
	}else{
        if(n1 == n2 and n1 > n3){
            std::cout<< "O maior numero e o " <<n1;
        }else if(n1 == n3 and n1 > n2){
            std::cout<< "O maior numero e o " << n1;
        }else if(n2 == n3 and n2 > n1){
            std::cout<< "O maior numero e o " <<n2;
        }else {
            std::cout<< "O maior numero e o " <<n1;
		}
	}

}
int main(){
	int n1, n2, n3;
	
	std::cout << "Digite o primeiro numero:\n";
	std::cin >> n1;
	std::cout << "Digite o segundo numero:\n";
	std::cin >> n2;
	std::cout << "Digite o terceiro numero:\n";
	std::cin >> n3;
	
	funcao(n1, n2, n3);
	
	return 0;
}