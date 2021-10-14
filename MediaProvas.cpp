#include <iostream>


float media3(float nota1, float nota2, float nota3){
    return (nota1 + nota2 + nota3) / 3;
}
float media2(float nota1, float nota2) {
    return (nota1 + nota2) / 2;
}

int main() {
    int n1, n2, n3;
    
    std::cout << "Insira a nota da primeira prova:\n";
    std::cin >> n1;
    std::cout << "Insira a nota da segunda prova:\n";
    std::cin >> n2;
    std::cout << "Insira a nota da terceira prova:\n";
    std::cin >> n3;

    std::cout << "A media entre todas as provas e: " << media3 ( n1, n2, n3 ) << "\n";

    if( n1 != n2 && n2 != n3 && n3 != n1 ){
        if( n1>n2 && n1>n3 ){
            if( n2>n3 ){
                std::cout << "A media das notas mais altas e: " << media2( n1, n2 ) << "\n";
            }else{
                std::cout << "A media das notas mais altas e: " << media2( n1, n3 ) << "\n";
        	}
            	std::cout << "A media das notas mais baixas e: " << media2( n2, n3 ) << "\n";
        }
        if( n2>n1 && n2>n3 ){ 
            if( n3>n1 ){
                std::cout << "A media das notas mais altas e: " << media2( n2, n3 ) << "\n";
            }else{
                std::cout << "A media das notas mais altas e: " << media2( n2, n1 ) << "\n";
            }
            	std::cout << "A media das notas mais baixas e: " << media2( n1, n3 ) << "\n";
        }
        if( n3>n1 && n3>n2 ){
            if( n2>n1 ){
                std::cout << "A media das notas mais altas e: " << media2( n3, n2 ) << "\n";
            }else{
                std::cout << "A media das notas mais altas e: " << media2( n3, n1 ) << "\n";
            }
            	std::cout << "A media das notas mais baixas e: " << media2( n2, n1 ) << "\n";
        }
    }else{

        if( n1 == n2 && n1 > n3 ){
            std::cout << "A media das notas mais altas e: " << media2( n1, n2 ) << "\n";
            std::cout << "A media das notas mais baixas e: " << media2( n2, n3 ) << "\n";
        }
        if(n1 == n3 && n1 > n2){
            std::cout << "A media das notas mais altas e: " << media2( n1, n3 ) << "\n";
            std::cout << "A media das notas mais baixas e: " << media2( n1, n2 ) << "\n";
        }
        if( n2 == n3 && n2 > n1 ){
            std::cout << "A media das notas mais altas e: " << media2( n2, n3 ) << "\n";
            std::cout << "A media das notas mais baixas e: " << media2( n2, n1 ) << "\n";
        }
        if( n1 == n2 && n2 == n3 && n3 == n1 ){
            std::cout << "A media das notas mais altas e: " << media2( n1, n1 ) << "\n";
            std::cout << "A media das notas mais baixas e: " << media2( n1, n1 ) << "\n";
        }
    }


    return 0;
}