#include <iostream>
#include "pessoa.h"
#include "juridica.h"
#include "fisica.h"

/*      ========================ADENDO IMPORTANTE=================================
        EU NÃO FAÇO IDEIA SE MINHA LÓGICA DE CALCULAR O IMPOSTO DE RENDA ESTÁ CERTA (como todo brasileiro)
        +++++ TERMINANTEMENTE PROIBIDO SE BASEAR PRA PAGAR O GOVERNO +++++ */

using namespace std;

int main()
{

    int n;
    juridica jur;
    fisica fis;
    float r;

    while(1){
    cout<<"-------------CALCULADORA DE IMPOSTO DE RENDA---------------"<<endl;
    cout<<"Digite qual tipo de pessoa sera calculado o imposto: "<<endl;
    cout<<endl;
    cout<<"1 - Fisica"<<endl;
    cout<<"2 - Juridica"<<endl;
    cout<<"0 - Sair do programa"<<endl;
    cin>>n;
    cout<<endl;

    switch (n){

        case 1:
        cout<<"--------------------------------"<<endl;
        cout<<"Por favor informe renda mensal da pessoa: "<<endl;
        cin>> r;

        fis.calculaImposto(r);
        cout<<"IMPOSTO A SER PAGO: "<<fis.getImposto() << " REAIS" <<endl;
        break;

       case 2:
        cout<<"--------------------------------"<<endl;
        cout<<"Por favor informe renda mensal da empresa: "<<endl;
        cin>> r;

        jur.calculaImposto(r);
        cout<<"IMPOSTO A SER PAGO: "<<jur.getImposto() << " REAIS" <<endl;
        break;

        case 0:
        return 0;

    }
    }

    return 0;
}
