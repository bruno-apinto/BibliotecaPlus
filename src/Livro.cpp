#include "../include/Livro.h"
#include <iostream>
#include <string>
#include <vector>

/**
 * @brief Construtor de Livro(vazio)
 * 
 */
// Livro::Livro() : Livro::Livro("A", "B", "C", "D", "F", "G", "H") {}

/**
 * @brief Construct a new Livro:: Livro object
 * 
 * @param nome 
 * @param autor 
 * @param ano 
 * @param edicao 
 * @param editora 
 * @param ID
 */
Livro::Livro(std::string nome, std::string autor, std::string ano,
    std::string edicao, std::string editora, std::string ID) : nome_(nome), autor_(autor), ano_(ano),
        edicao_(edicao), editora_(editora), ID_(ID), status_("teste") {}

std::string Livro::getNome() const {
    return nome_;
}

std::string Livro::getAutor() const {
    return autor_;
}

std::string Livro::getAno() const {
    return ano_;
}

std::string Livro::getEdicao() const {
    return edicao_;
}

std::string Livro::getEditora() const {
    return editora_;
}

std::string Livro::getID() const {
    return ID_;
}

std::string Livro::getStatus() const {
    return status_;
}


bool Livro::comparar (Livro& livro){
   
    int indice = 1; //variavel auxiliar para comparar livros

    indice *= livro.getAno().compare(ano_);
    indice *= livro.getNome().compare(nome_);
    indice *= livro.getAutor().compare(autor_);
    indice *= livro.getEdicao().compare(edicao_);
    indice *= livro.getEditora().compare(editora_);
    indice *= livro.getID().compare(ID_);

    return indice;
}

std::vector<Livro> Livro::procurarLivros (std::string parametro, std::string item, std::vector<Livro> livrosEncontrados) {
    
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