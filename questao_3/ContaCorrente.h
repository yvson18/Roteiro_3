#ifndef CONTA_CORRENTE_
#define CONTA_CORRENTE_
#include "Conta.h"

class ContaCorrente: public Conta{

    protected:
        double salario;
        int limite;

    public:

        virtual void definirLimite();

        ContaCorrente(std::string,int,double,double,int);
        ContaCorrente(){};
//----------------Gets-------------------------

        double getLimite(){return this->limite;}
        double getsalarioMensal(){return this->salario;}

//----------------Sets-------------------------
        void setLimite(double);
        void setsalario(double);

};

#endif