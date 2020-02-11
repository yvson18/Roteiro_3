#ifndef CONTA_ESPECIAL_
#define CONTA_ESPECIAL_

#include "ContaCorrente.h"


class ContaEspecial: public ContaCorrente{

    public:
        ContaEspecial(std::string,int,double,double,int);
        void definirLimite()override;   
};

#endif