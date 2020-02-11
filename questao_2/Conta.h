#ifndef CONTA_
#define CONTA_
#include "Iconta.h"
#include <string>

class Conta: public Iconta{

    protected:
        std::string  nomeCliente;
        double salarioMensal,saldo,limite;
        std::string numeroConta;
        
    public:

    virtual void definirLimite();
    void sacar(double valor)override;
    void depositar(double valor)override;

//---------Construtor-----------

    Conta(std::string,double,std::string,double);
    Conta(){};

//-----------Gets----------------

    std::string getnomeCliente(){return this->nomeCliente;}
    double getsalarioMensal(){return this->salarioMensal;}
    std::string getnumeroConta(){return this->numeroConta;}
    double getSaldo(){return this->saldo = saldo;}
    double getLimite(){return this->limite;}

//-----------Sets----------------

    void setnomeCliente(std::string);
    void setsalarioMensal(double);
    void setnumeroConta(std::string);
    void setSaldo(double);
    void setLimite(double);

};

#endif