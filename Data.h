#ifndef DATA_H
#define DATA_H


class Data
{
    private:
    int dia, mes, ano;

    public:

    Data();
    Data(int d, int m, int a);

    int getDia();
    void setDia(int d);

    int getMes();
    void setMes(int d);

    int getAno();
    void setAno(int d);

    void AvancarDia();

    virtual ~Data();

};

#endif // DATA_H
