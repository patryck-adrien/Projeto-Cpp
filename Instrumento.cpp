#include <iostream>
#include <string>
using namespace std;

#include "Instrumento.h"

    Instrumento::Instrumento(float co, const string &n, const string &t, float pr)
    :comprimento(co), nome(n), tipo(t), preco(pr) //inicializadores
    { }

    Instrumento::Instrumento(float co, const string &n, float pr)
    :comprimento(co), nome(n), preco(pr), tipo("Guitarra") //inicializadores
    { } //sobrecarga do construtor com tipo padrão

    Instrumento::~Instrumento() { }

    float Instrumento::getComprimento() { return comprimento; }
    string Instrumento::getNome() { return nome; }
    string Instrumento::getTipo() { return tipo; }
    float Instrumento::getPreco() const { return preco; }
    void Instrumento::setNome(const string &n) { nome = n; }
    void Instrumento::setTipo(const string &t) { tipo = t; }
    void Instrumento::setPreco(float pr) { preco = pr; }
    
    void Instrumento::mostra() { //metodo virtual
        cout << "\nInstrumento: " << tipo 
             << "\n\nNome: "<< nome 
             << "\nComprimento: " << comprimento << " cm"
             << "\nPreço: R$ " << preco;
    }

//fim da implementação de Instrumento.h
