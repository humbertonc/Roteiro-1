#include "Empregado.h"

Empregado::Empregado()
{
    setSalario(0);
    setNome("Fulano");
    setSobre("da Silva");
}

Empregado::Empregado(double s, string n, string sob)
{
    setNome(n);
    setSobre(sob);
    if(s >= 0)
    setSalario(s);
}

double Empregado::getSalario(){
    return salarioM;
}

void Empregado::setSalario(double s){
    salarioM = s;
}

string Empregado::getNome(){
    return nome;
}

void Empregado::setNome(string n){
    nome = n;
}

string Empregado::getSobre(){
    return sobrenome;
}

void Empregado::setSobre(string sob){
    sobrenome = sob;
}

Empregado::~Empregado()
{
    //dtor
}
