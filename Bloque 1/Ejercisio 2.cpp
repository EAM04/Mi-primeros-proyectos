#include<iostream>

//using namespace std; 

int main(){
    float precio,iva,preciofinal;
    std::cout<<"precio del producto" ; std::cin>>precio;
    
    iva = precio*8/100;
    preciofinal = precio+iva;

    std::cout<<"El precio final es: "<<preciofinal;
    







    return 0;
}