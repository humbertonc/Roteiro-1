#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"


class ControleDeGastos
{
    public:

        ControleDeGastos();
        virtual ~ControleDeGastos();
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo(string tipo);
        void setDespesa(Despesa d, int pos);
        Despesa getDespesa(int pos);

    protected:

    private:
        Despesa despesas[100];
};

#endif // CONTROLEDEGASTOS_H
