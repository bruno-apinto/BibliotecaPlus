#include <iostream>
#include <vector>
#include <string>

#include "include/AcervoLivros.h"
#include "include/Aluno.h"
#include "include/Livro.h"
#include "include/Situacao.h"

using std::vector;
using std::string;

AcervoLivros::AcervoLivros() {}

std::vector<Livro> AcervoLivros::procurarLivros (std::string categoria, std::string item) {

    string linha;
    std::ifstream leituraPadrao ("arquivos/Livros/livros.txt");
    std::ifstream leituraStatus ("arquivos/Livros/status.txt");
    
    int i = 1;
    string caracteristicas[8];
    vector<Livro> lista;
    
    
    while (!leituraPadrao.eof()) {
       
        if(i%8 != 7){ 
        getline (leituraPadrao, caracteristicas[i%8], '|');}

        else {
            for (auto it = lista.begin(); it != lista.end(); it++){
                for (int a = 0; a<3; a++){
                    getline(leituraStatus, caracteristicas[7], '|');
                }
            }
        }

        if (i%8 == 0) {
            lista.push_back(Livro(caracteristicas[0], caracteristicas[1], caracteristicas[2],
                                    caracteristicas[3], caracteristicas[4], caracteristicas[5], 
                                    caracteristicas[6], caracteristicas[7]));
        }
        i++;
        }

    
    leituraPadrao.close();
    leituraStatus.close();

    lista = AcervoLivros::procurarLivros(categoria, item, lista);
    return lista;

}

std::vector<Livro> AcervoLivros::procurarLivros (std::string categoria, std::string item, std::vector<Livro> livrosEncontrados) {
    
    if (!(parametro.compare("Autor"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->getAutor().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;
    }

    else if (!(parametro.compare("Nome"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->getNome().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("Editora"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->getEditora().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("Ano"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->getAno().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("Edicao"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->getEdicao().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("ID"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->getID().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }
            std::vector<Livro> auxiliar;
        return auxiliar;

}
