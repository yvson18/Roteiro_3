#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(std::string nomeCliente ,int numeroConta ,double saldo,double salario,int limite):
Conta(nomeCliente,numeroConta,saldo){
    this->salario = salario;
}


void ContaCorrente::definirLimite(){
    this->limite = 2*salario;
}

void ContaCorrente::setLimite(double){
    this->limite = limite;
}
void ContaCorrente::setsalario(double){
    this->salario = salario;
}