#ifndef IMOVEIS_
#define IMOVEIS_
#include <string>


class Imoveis{

    private:
        std::string titulo;
        double valor;
        std::string disponibilidade;

    public:
        Imoveis(){};
        Imoveis(std::string,double,std::string);
        virtual void exibir();
    
};

#endif