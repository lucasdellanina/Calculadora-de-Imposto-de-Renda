#ifndef JURIDICA_H
#define JURIDICA_H

#include "pessoa.h"


class juridica : public pessoa
{
    public:
        juridica();
        virtual ~juridica();
        void calculaImposto (float r);

    protected:

    private:
};

#endif // JURIDICA_H
