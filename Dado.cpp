#include <iostream>
#include <cstdlib>
#include <ctime>


int dado() {
    int n = rand() % 6 + 1;
    return n;
}

int main(){
    srand( time ( NULL ) );
    std::cout << dado();
    
    return 0;
}