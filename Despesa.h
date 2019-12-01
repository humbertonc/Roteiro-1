#ifndef DESPESA_H
#define DESPESA_H
#include<string>

using namespace std;
class Despesa
{
    public:
        Despesa();
        virtual ~Despesa();
        int getValor();
        void setValor(int v);
        string getTipoDeGasto();
        void setTipoDeGasto(string tpg);

    protected:

    private:
        double valor;
        string tipoDeGasto;
};

#endif // DESPESA_H
