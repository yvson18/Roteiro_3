#include "Conta.h"
#include <iostream>

Conta::Conta(std::string nomeCliente,double salarioMensal,std::string numeroConta,double saldo){
    
    this->nomeCliente = nomeCliente;
    this->salarioMensal = salarioMensal;
    this->numeroConta = numeroConta;
    this->saldo = saldo;

}

void Conta::setnomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}
void Conta::setsalarioMensal(double salarioMensal){
    this->salarioMensal = salarioMensal;
}
void Conta::setnumeroConta(std::string numeroConta){
    this->numeroConta = numeroConta;
}
void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}
void Conta::setLimite(double limite){
    this->limite = limite;
}

void Conta::definirLimite(){
    this->limite = 2*salarioMensal;
}
void Conta::sacar(double valor){
    this->saldo = saldo - valor;
}
void Conta::depositar(double valor){
    this->saldo = saldo + valor;
}


