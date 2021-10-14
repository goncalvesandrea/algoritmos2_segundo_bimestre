#include <iostream>
#include <cstdlib>
#include <ctime>


int dado() {
    int n = rand() % 6 + 1;
    return n;
}

int main(){
    srand( time ( NULL ) );
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    int v5 = 0;
    int v6 = 0;

    for (int i = 0; i < 100000; i++)
    {
        int nGerado = dado();

        if (nGerado == 1) v1++;
        if (nGerado == 2) v2++;
        if (nGerado == 3) v3++;
        if (nGerado == 4) v4++;
        if (nGerado == 5) v5++;
        if (nGerado == 6) v6++;
    }

    std::cout << "O numero 1 saiu: " << v1 << " vezes \n";
    std::cout << "O numero 2 saiu: " << v2 << " vezes \n";
    std::cout << "O numero 3 saiu: " << v3 << " vezes \n";
    std::cout << "O numero 4 saiu: " << v4 << " vezes \n";
    std::cout << "O numero 5 saiu: " << v5 << " vezes \n";
    std::cout << "O numero 6 saiu: " << v6 << " vezes \n";


    return 0;
}