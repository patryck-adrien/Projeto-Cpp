#ifndef UKULELE_H
#define UKULELE_H

#include <string>
using namespace std;

class Ukulele:public Instrumento
{   private:
        string marca;
        int cordas;
        float peso;

    public:
        Ukulele(const string &, int, float, float, const string &, const string &, float);

        ~Ukulele();

        string getMarca();
        int getCordas();
        float getPeso();

        void setMarca(const string &);
        void setCordas(int);
        void setPeso(float);

        void mostra();
};
#endif
