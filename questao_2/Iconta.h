#ifndef ICONTA_
#define ICONTA_

class Iconta{

    public:
        virtual void sacar(double valor) = 0;
        virtual void depositar(double valor) = 0;


};

#endif