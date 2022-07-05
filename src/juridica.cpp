#include "juridica.h"
#include "pessoa.h"

juridica::juridica()
{
        setRenda(0);
}

juridica::~juridica()
{
    //dtor
}
void juridica::calculaImposto (float r){
    setRenda(r);
    imposto = 0.1 * renda;
}
