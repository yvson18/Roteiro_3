#include <iostream>
#include "Imoveis.h"
#include "Casa.h"

using namespace std;

int main(){

    Imoveis *ponteiroParaCasa = new Casa("Casa maneira",20000,"Vender",5,3);

    ponteiroParaCasa->exibir();
   

    return 0;
}