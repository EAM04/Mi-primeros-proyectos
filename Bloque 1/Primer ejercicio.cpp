#include<iostream>

//using namespace std;

int main(){

    int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    std::cout<<"Digite un numero: "; std::cin>>n1;
    std::cout<<"Digite otro numero: "; std::cin>>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    std::cout<<"\nLa suma es: "<<suma;
    std::cout<<"La resta es: "<<resta;
    std::cout<<"La multiplicacion es: "<<multiplicacion;
    std::cout<<"La division es: "<<division;

    return 0;
}