#include <iostream>
using namespace std;

#include "Instrumento.h"
#include "Guitarra.h"
#include "Violao.h"

    Guitarra::Guitarra(const string &m, int c, float p, float co, const string &n, const string &t, float pr)
    :Instrumento(co, n, t, pr) 
    {   setMarca(m);
        setCordas(c);
        setPeso(p); 
    }

    Guitarra::~Guitarra() { }

    string Guitarra::getMarca() { return marca; }
    int Guitarra::getCordas() { return cordas; }
    float Guitarra::getPeso() { return peso; }

    void Guitarra::setMarca(const string &m) { marca = m; }
    void Guitarra::setCordas(int c) { cordas = c; }
    void Guitarra::setPeso(float p) { peso = p; }

    float Guitarra::calcDesconto(Violao v) const { 
        return ((v.preco + preco) * 0.05); 
    }

    void Guitarra::mostra() {
        Instrumento::mostra(); //uso do mostra da superclasse
        cout << "\n\nEspecificações:\n"
             << "\nMarca: " << marca
             << "\nQuantidade de cordas: " << cordas
             << "\nPeso: " << peso << " kg";
    }

//fim da implementação de Guitarra.h
