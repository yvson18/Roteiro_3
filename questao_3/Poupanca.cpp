#include "Poupanca.h"
#include <iostream>

Poupanca::Poupanca(std::string nomeCliente,int numeroConta,double saldo,int variacao,double taxadeRendimento)
    :Conta(nomeCliente,numeroConta,saldo){
    
    this->taxadeRendimento = taxadeRendimento;
    this->variacao = variacao;
}

double Poupanca::render(){

    if(variacao == 51){
       // std::cout << taxadeRendimento << std::endl;
        double rendi = saldo;
        //std::cout << rendi << std::endl;
        return (saldo * (1+ (taxadeRendimento/100)));
    }else if(variacao == 1){
        return (saldo * (1 + 0.5));
    }
}

void Poupanca::setVariacao(int variacao){
    this->variacao = variacao;
}
void Poupanca::setTaxaRendimento(double taxadeRendimento){
    this->taxadeRendimento = taxadeRendimento;
}