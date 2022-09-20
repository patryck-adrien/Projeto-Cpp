#ifndef VIOLAO_H
#define VIOLAO_H

#include <string>
using namespace std;

#include "Guitarra.h"

class Violao:public Instrumento
{   private:
        string marca;
        const int cordas;
        float peso;

    public:
        Violao(const string &, int, float, float, const string &, const string &, float);

        ~Violao();

        string getMarca();
        int getCordas();
        float getPeso();

        void setMarca(const string &);
        void setPeso(float);
        void mostra();
        
        friend class Guitarra; //classe amiga
};
#endif
