#include "pessoa.h"

pessoa::pessoa()
{
    //ctor
}

pessoa::~pessoa()
{
    //dtor
}

float pessoa::getImposto (){
    return imposto;
}

void pessoa::setRenda (float a){
    renda = a;

}
