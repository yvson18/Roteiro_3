#include "Conta.h"
#include <iostream>

Conta::Conta(std::string nomeCliente,int numeroConta,double saldo){

    this->nomeCliente = nomeCliente;
    this->numeroConta = numeroConta;
    this->saldo = saldo;
}

void Conta::setnomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}
void Conta::setnumeroConta(int numeroConta){
    this->numeroConta = numeroConta;
}
void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}

void Conta::sacar(double valor){

    if(saldo - valor < 0){
        std::cout << "Saldo indisponivel" << std::endl;
    }else{
        this->saldo = saldo - valor;
    }
}
void Conta::depositar(double valor){
    this->saldo = saldo + valor;
}