#include <iostream>
using namespace std;

#include "Instrumento.h"
#include "Violao.h"

    Violao::Violao(const string &m, int c, float p, float co, const string &n, const string &t, float pr)
    :Instrumento(co, n, t, pr), marca(m), cordas(c), peso(p)
    { }

    Violao::~Violao() { }

    string Violao::getMarca() { return marca; }
    int Violao::getCordas() { return cordas; }
    float Violao::getPeso() { return peso; }
    void Violao::setMarca(const string &m) { marca = m; }
    void Violao::setPeso(float p) { peso = p; }
    
    void Violao::mostra() {
        Instrumento::mostra(); //uso do mostra da superclasse
        cout << "\n\nEspecificações:\n"
             << "\nMarca: " << marca
             << "\nQuantidade de cordas: " << cordas 
             << "\nPeso: " << peso << " Kg";
    }

//fim da implementação de Violao.h