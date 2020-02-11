#ifndef FUNCIONARIONAOEXISTE_
#define FUNCIONARIONAOEXISTE_

#include <string.h>
#include <stdexcept>

class FuncionarioNaoExisteException: public std::exception {

    private:
        char mensagem[100];

    public:

        FuncionarioNaoExisteException(){
            strcpy(mensagem,"Funcionario inexistente!");
        }        

        const char* what(){
            return mensagem;
        }

};

#endif