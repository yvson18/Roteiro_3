#ifndef CONTA_
#define CONTA_
#include <string>

class Conta{

    protected:
        std::string  nomeCliente; 
        int numeroConta;
        double saldo;
        
    public:

    void sacar(double valor);
    void depositar(double valor);

//---------Construtor-----------

    Conta(std::string,int,double);
    Conta(){};

//-----------Gets----------------

    std::string getnomeCliente(){return this->nomeCliente;}
    int getnumeroConta(){return this->numeroConta;}
    double getSaldo(){return this->saldo = saldo;}

//-----------Sets----------------

    void setnomeCliente(std::string);
    void setnumeroConta(int);
    void setSaldo(double);
 

};

#endif