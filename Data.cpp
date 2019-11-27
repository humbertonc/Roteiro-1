#include "Data.h"

Data::Data()
{
    setDia(1);
    setMes(1);
    setAno(2019);
}

Data::Data(int d, int m, int a){
    if(d >= 1 && d <= 31){
        setDia(d);
    }else{
        setDia(1);
    }
    if(m >= 1 && m <= 12){
        setMes(m);
    }else{
        setMes(1);
    }
    setAno(2019);
}

void Data::AvancarDia(){
    if(dia == 31){
        dia = 1;
        if(mes == 12){
            mes = 1;
            ano++;
        }else{
            mes++;
        }
    }else if(dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){
        dia = 1;
        mes++;
    }else if(dia == 29 && mes == 2){
        dia = 1;
        mes++;
    }else if(dia == 28 && mes == 2){
        if(ano%4 == 0){
            dia++;
        }else{
            dia = 1;
            mes++;
        }
    }else{
        dia++;
    }

}

void Data::setDia(int d){
    dia = d;
}
int Data::getDia(){
    return dia;
}
void Data::setMes(int m){
    mes = m;
}
int Data::getMes(){
    return mes;
}
void Data::setAno(int a){
    ano = a;
}
int Data::getAno(){
    return ano;
}

Data::~Data()
{
    //dtor
}
