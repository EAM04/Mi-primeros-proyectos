#include <iostream>

using namespace std; 

int main(){
    int x,y,aux;
    std::cout<<"Digite el valor de x:" ;std::cin>>x;
    std::cout<<"Digite el valor de y:" ;std::cin>>y;

    aux = x;
    x = y;
    y = aux;

    std::cout<<"El nuevo valor de x:"<<x<<endl;
    std::cout<<"El nuevo valor de y:"<<y<<endl;

    return 0;
}