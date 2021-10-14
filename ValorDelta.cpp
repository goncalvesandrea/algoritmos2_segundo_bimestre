#include <iostream>
#include <cmath>


float coeficientes(float a, float b, float c){
    float delta = (b * b) - (4 * a * c);

    std::cout<<"O valor de delta e: "<<delta;
}

int main(){
    float a, b, c;

    std::cout<<"Coeficiente a:\n";
    std::cin>>a;
    std::cout<<"Coeficiente b:\n";
    std::cin>>b;
    std::cout<<"Coeficiente c:\n";
    std::cin>>c;

    coeficientes(a, b, c);

    return 0;
}