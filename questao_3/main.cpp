#include <iostream>

#include "ContaCorrente.h"
#include "Poupanca.h"
#include "ContaEspecial.h"

using namespace std;

int main(){

    ContaCorrente c1("Dagoberto",1234321,5000,200,100);
    
    c1.definirLimite();
    cout << c1.getLimite() << endl;

    Poupanca p1("Dagoberto",123,23,1,32);

    p1.setTaxaRendimento(32);
    cout << p1.render() <<endl;

    ContaEspecial ces1("Dagoberto",1234321,5000,200,100);

    ces1.definirLimite();
    cout << ces1.getLimite() << endl;

   
    return 0;
}