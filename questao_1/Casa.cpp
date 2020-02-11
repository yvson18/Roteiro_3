#include "Casa.h"
#include <iostream>
#include "Imoveis.h"

Casa::Casa(std::string titulo,double valor,std::string disponibilidade,int numDeQuartos,int numDeBanheiros) :
    Imoveis(titulo,valor,disponibilidade){
        this->numDeQuartos = numDeQuartos;
        this->numDeBanheiros = numDeBanheiros;

}

void Casa::exibir(){

    Imoveis::exibir();
    std::cout << "Numero de quartos: " << numDeQuartos << "\n"
              << "Numero de Banheiros: " << numDeBanheiros << std::endl;

}