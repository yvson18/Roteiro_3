#ifndef POUPANCA_
#define POUPANCA_ 
#include "Conta.h"

class Poupanca: public Conta{

    private:
        int variacao;
        double taxadeRendimento;
    
    public:
        Poupanca(){}
        Poupanca(std::string,int,double,int,double);
        double render();

        int getvariacao(){return this->variacao;}
        double gettaxaRendimento(){return this->taxadeRendimento;}

        void setVariacao(int);
        void setTaxaRendimento(double);


}; 

#endif