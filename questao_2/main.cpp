#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(){


    Conta c1("LIL LIXO",50000.50,"123232",50056);

    cout <<"Saldo: "<<c1.getSaldo()<<endl;
    c1.sacar(1000);
    cout <<"Saldo apos saque: "<< c1.getSaldo() << endl;
    c1.depositar(500);
    cout <<"Saldo apos deposito: "<< c1.getSaldo() << endl;
    c1.definirLimite();
    cout <<"Limite: " <<c1.getLimite()<<endl;

    cout << "\n";

    ContaEspecial ce1("EMICOUTO",2333000.50,"123252",20000);

    cout <<"Saldo: "<<ce1.getSaldo()<<endl;
    ce1.sacar(1000);
    cout <<"Saldo apos saque: "<< ce1.getSaldo() << endl;
    ce1.depositar(500);
    cout <<"Saldo apos deposito: "<< ce1.getSaldo() << endl;
    ce1.definirLimite();
    cout <<"Limite: " <<ce1.getLimite()<<endl;

  

    return 0;
}