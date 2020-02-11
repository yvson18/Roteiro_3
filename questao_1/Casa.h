#ifndef CASA_H
#define CASA_H

#include "Imoveis.h"

class Casa: public Imoveis{

    private:
        int numDeQuartos, numDeBanheiros;    

    public:
        Casa(){};
        Casa(std::string,double,std::string,int,int);
        void exibir()override;

};


#endif