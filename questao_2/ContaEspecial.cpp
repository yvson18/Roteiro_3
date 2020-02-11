#include "ContaEspecial.h"
#include <iostream>

void ContaEspecial::definirLimite(){
    this->limite = 3*salarioMensal;
}

 ContaEspecial::ContaEspecial(std::string nomeCliente,double salarioMensal,std::string numeroConta,double saldo)
     :Conta(nomeCliente,salarioMensal,numeroConta,saldo){
}
