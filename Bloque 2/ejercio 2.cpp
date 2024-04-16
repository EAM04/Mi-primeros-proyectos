//ESCRIBE LA SIGUENTE EXPRESION: a+b/c/d+e/f

#include <iostream>

using namespace std; 

int main(){
    float a,b,c,d,e,f, resultado = 0;

    std::cout<<"Digite el valor de a:"  ;std::cin>>a;
    std::cout<<"Digite el valor de b:"  ;std::cin>>b;
    std::cout<<"Digite el valor de c:"  ;std::cin>>c;
    std::cout<<"Digite el valor de d:"  ;std::cin>>d;
    std::cout<<"Digite el valor de e:"  ;std::cin>>e;
    std::cout<<"Digite el valor de f:"  ;std::cin>>f;

    resultado = (a+(b/c))/(d+(e/f));

    std::cout<<"el resultado es:"<<resultado<<endl;


    return 0;
}