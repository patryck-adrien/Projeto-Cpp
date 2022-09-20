#ifndef GUITARRA_H
#define GUITARRA_H

#include <string>
using namespace std;

class Violao; 

class Guitarra:public Instrumento
{   private:
        string marca;
        int cordas;
        float peso;

    public:
        Guitarra(const string &, int, float, float, const string &, const string &, float);

        ~Guitarra();

        string getMarca();
        int getCordas();
        float getPeso();

        void setMarca(const string &);
        void setCordas(int);
        void setPeso(float);

        float calcDesconto(Violao) const; //metodo que acessa obj de Violao

        void mostra(); 

};
#endif
