#ifndef INSTRUMENTO_H
#define INSTRUMENTO_H

#include <string>
using namespace std;

class Instrumento
{   protected:
        const float comprimento; //atributo const (sem setter)
        string nome;
        string tipo;
        float preco;

    public:
        Instrumento(float, const string &, const string &, float);

        Instrumento(float, const string &, float); //sobrecarga do construtor

        ~Instrumento();
        float getComprimento();
        string getNome();
        string getTipo();
        float getPreco() const;

        void setNome(const string &);
        void setTipo(const string &);
        void setPreco(float);

        //método friend implementado no main.cpp
        friend float calcPrecoComFrete(Instrumento, float);
        friend float novoComprimento(Instrumento, float);
        
        virtual void mostra(); //o ponteiro no main() enxergará este método
};
#endif
