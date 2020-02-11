#include <iostream>
#include "Imoveis.h"

Imoveis::Imoveis(std::string titulo,double valor,std::string disponibilidade){

    this->titulo = titulo;
    this->valor = valor;
    this->disponibilidade = disponibilidade;

}

void Imoveis::exibir(){

    std::cout << "Titulo: " << titulo << "\n"
              << "Valor: " << valor << "\n"
              <<"Disponibilidade: " << disponibilidade << std::endl;

}