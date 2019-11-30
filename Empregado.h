#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

using namespace std;
class Empregado
{
    public:

        Empregado();
        Empregado(double s, string n, string sob);

        virtual ~Empregado();

        double getSalario();
        void setSalario(double s);
        string getNome();
        void setNome(string n);
        string getSobre();
        void setSobre(string sob);

    protected:

    private:
        string nome, sobrenome;
        int salarioM;
};

#endif // EMPREGADO_H
