#include "Despesa.h"

Despesa::Despesa()
{
    //ctor
}

int Despesa::getValor()
{
    return valor;
}

void Despesa::setValor(int v)
{
    valor = v;
}

string Despesa::getTipoDeGasto()
{
    return tipoDeGasto;
}

void Despesa::setTipoDeGasto(string tpg)
{
    tipoDeGasto = tpg;
}

Despesa::~Despesa()
{
    //dtor
}
