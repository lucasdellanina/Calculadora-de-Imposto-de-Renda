#include "fisica.h"

fisica::fisica()
{
    setRenda (0);
}

fisica::~fisica()
{
    //dtor
}

void fisica::calculaImposto (float r){
    float aliquota, deducao;
    setRenda(r);

    if ((renda >= 0) && (renda <= 1400)){
    deducao = 0;
    aliquota = 0;}

    if ((renda > 1400) && (renda <= 2100)){
    deducao = 100;
    aliquota = 10;}

    if ((renda > 2100) && (renda <= 2800)){
    deducao = 270;
    aliquota = 15;}

    if ((renda > 2800) && (renda <= 3600)){
    deducao = 500;
    aliquota = 25;}

    if (renda > 3600){
    deducao = 700;
    aliquota = 30;}

    imposto = (renda * (aliquota / 100) - deducao);
    if (renda <= 0 ){
        renda = 0;
    }

}
