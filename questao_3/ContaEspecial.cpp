#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string nomeCliente ,int numeroConta ,double saldo,double salario,int limite):
ContaCorrente(nomeCliente,numeroConta,saldo,salario,limite){
    this->salario = salario;
    this->limite = limite;
}

void ContaEspecial::definirLimite(){
    this->limite = 4*salario;
}