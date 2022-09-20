#include <iostream>
using namespace std;

#include "Instrumento.h"
#include "Ukulele.h"

    Ukulele::Ukulele(const string &m, int c, float p, float co, const string &n, const string &t, float pr)
    :Instrumento(co, n, t, pr) 
    {   setMarca(m);
        setCordas(c);
        setPeso(p); 
    }

    Ukulele::~Ukulele() { }

    string Ukulele::getMarca() { return marca; }
    int Ukulele::getCordas() { return cordas; }
    float Ukulele::getPeso() { return peso; }

    void Ukulele::setMarca(const string &m) { marca = m; }
    void Ukulele::setCordas(int c) { cordas = c; }
    void Ukulele::setPeso(float p) { peso = p; }

    void Ukulele::mostra() {
        Instrumento::mostra(); //uso do mostra da superclasse
        cout << "\n\nEspecificações:\n"
             << "\nMarca: " << marca
             << "\nQuantidade de cordas: " << cordas
             << "\nPeso: " << peso << " g";
    }

//fim da implementação de Ukulele.h