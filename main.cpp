#include <iostream>
using namespace std;

#include "Instrumento.h"
#include "Violao.h"
#include "Ukulele.h"                    
#include "Guitarra.h"

//método friend
float calcPrecoComFrete(Instrumento i, float f) {
    return i.preco + f; //acesso direto a preco
}

//método friend
float novoComprimento(Instrumento i, float x) {
    return i.comprimento + x; //acesso direto a comprimento
}

int main()
{   float f;
    Instrumento *p1, *p2;
    
    { //bloco limitador 1 VIOLAO
        //uso do new 
        Violao *v = new Violao("Taylor", 6, 2.5, 59.69, "Gs Mini-e Mahogany", "Violão", 8784.87);
        v->mostra(); //gera a saida utilizando vinculação dinamica
        
        cout << "\n\nDigite o frete para sua cidade: ";
        cin >> f; //uso do cin

        cout << "\nPreço com frete: R$ "
             << calcPrecoComFrete(*v, f) //chama friend com valor do apontado
             << "\n----------------------------------";
    }

    { //bloco limitador 2 UKULELE
        Ukulele u("Shelby", 4, 450, 53.10, "Soprano SU21M", "Ukulele", 273.99);
        
        p1 = &u; //aponta pro obj da subclasse
        p1->mostra(); //uso do polimorfismo
        
        cout << "\nPreço com frete: R$ "
            << calcPrecoComFrete(*p1, f) //chama friend com valor do apontado
            << "\n---------------------------------";
    }

    { //bloco limitador 3 GUITARRA

        //obj constante
        const Violao v("Taylor", 6, 2.5, 59.69, "Gs Mini-e Mahogany", "Violão", 8784.87); 
        Guitarra g("Gibson", 6, 4.18, 98.00, "Les Paul Tribute 2018", "Guitarra", 10490.00);

        //ponteiro para demonstrar polimorfismo
        p2 = &g; //APONTADOR DA SUPERCLASSE

        //”virtual” torna possível usar o operador seta, pois
        //um ponteiro do tipo Instrumento  "enxerga" o método mostra()
        //dos objetos das subclasses
        p2->mostra();
        
        cout << "\nPreço com frete: R$ "
             << calcPrecoComFrete(g, f) 
             << "\n\nComprando a Guitarra e o Violão"
             << "\nna mesma loja você ganha um desconto"
             << "\nde 5% e o preço final dos dois instrumentos"
             <<"\ncom frete fica R$ "  
             << ((p2->getPreco() + v.getPreco()) - g.calcDesconto(v)) + f 
             << "\n--------------------------------------------"
             << "\nOutra marca de Guitarra:\n";

        //setters
        g.setNome("Stratocaster G-100"); 
        g.setPreco(959.00);
        g.setMarca("Giannini");
        g.setPeso(3.5);

        //getters
        cout << "\nInstrumento: " << g.getTipo() 
             << "\n\nNome: "<< g.getNome()
             //apontado com endereço de guitarra que tem os dados de instrumento
             << "\nComprimento: " << novoComprimento(*p2, 2.03) << " cm" 
             //const não pode ser alterado diretamente, então usa-se o friend para mostrar
             << "\nPreço: R$ " << g.getPreco()
             << "\n\nEspecificações:\n"
             << "\nMarca: " << g.getMarca()
             << "\nQuantidade de cordas: " << g.getCordas() 
             << "\nPeso: " << g.getPeso() << " kg"
             << "\nPreço com frete: R$ "
             << calcPrecoComFrete(g, f) 
             << "\n\nComprando a Guitarra e o Violão"
             << "\nna mesma loja você ganha um desconto"
             << "\nde 5% e o preço final dos dois instrumentos"
             <<"\ncom frete fica R$ " 
             << ((g.getPreco() + v.getPreco()) - g.calcDesconto(v)) + f
             << "\n--------------------------------------------";
    }

    { //bloco limitador 4 INSTRUMENTO
        cout << "\nSobrecarga:\n";
             
        Instrumento i2(98.00, "Les Paul Tribute 2016", 10000.00); //sobrecarga 
        i2.mostra(); //gera a saída utilizando vinculação estática
        cout << "\n\n";
    }
}
