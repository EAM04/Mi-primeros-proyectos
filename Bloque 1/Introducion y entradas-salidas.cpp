#include <iostream>

using namespace std;

int main(){
    int edad;
    char sexo[10];
    float alturaenmetros;

    std::cout<<"edad de la persona:" ; std::cin>>edad;
    std::cout<<"sexo de la persona:" ; std::cin>>sexo;
    std::cout<<"altura de la persona:"; std::cin>>alturaenmetros;

    std::cout<<"\ndedad:  "<<edad;
    std::cout<<"sexo:  "<<sexo;
    std::cout<<"alturaenmetros:  "<<alturaenmetros;

    return 0; 
}