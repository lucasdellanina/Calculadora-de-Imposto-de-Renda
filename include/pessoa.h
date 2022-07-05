#ifndef PESSOA_H
#define PESSOA_H


class pessoa
{
    public:
        pessoa();
        virtual ~pessoa();
        virtual void calculaImposto(float r) = 0;
        float getImposto ();
        void setRenda (float a);

    protected:
        float imposto;
        float renda;



    private:
};

#endif // PESSOA_H
