#include "ControleDeGastos.h"
#include "Despesa.h"

ControleDeGastos::ControleDeGastos()
{
    //ctor
}

void ControleDeGastos::setDespesa(Despesa d, int pos)
{
    despesas[pos] = d;
}

Despesa ControleDeGastos::getDespesa(int pos)
{
    return despesas[pos];
}

double ControleDeGastos::calculaTotalDeDespesas()
{
    int i;
    double soma = 0;

    for(i = 0; i < 100; i++){
        if(despesas[i].getTipoDeGasto()[0] == '\0')
        break;

        soma += despesas[i].getValor();

    }

    return soma;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipo)
{   int i;
    for(i = 0; i < 100; i++){
        if(despesas[i].getTipoDeGasto()[0] == '\0')
        break;

        if(tipo == despesas[i].getTipoDeGasto())
        return true;
    }

    return false;
}


ControleDeGastos::~ControleDeGastos()
{
    //dtor
}
