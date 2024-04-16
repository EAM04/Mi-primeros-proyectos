#include <iostream>

using namespace std;

int main(){

float a,b,c,d,  resultado = 0;

std::cout<<"Digite el valor de a:" ; std::cin>>a;
std::cout<<"Digite el valor de d:" ; std::cin>>b;
std::cout<<"Digite el valor de c:" ; std::cin>>c;
std::cout<<"Digite el valor de d:" ; std::cin>>d;

resultado = a+(b/(c-d));

std::cout<<"El resultado es:"<<resultado;

    return 0;
}