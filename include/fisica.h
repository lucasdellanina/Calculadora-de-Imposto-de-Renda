#ifndef FISICA_H
#define FISICA_H

#include "pessoa.h"

class fisica : public pessoa
{
    public:
        fisica();
        virtual ~fisica();
        void calculaImposto (float r);


    protected:

    private:
};

#endif // FISICA_H
