#ifndef CONTA_ESPECIAL_
#define CONTA_ESPECIAL_
#include "Conta.h"

class ContaEspecial: public Conta{
    public:
        void definirLimite()override;
        ContaEspecial(std::string,double,std::string,double);

};

#endif