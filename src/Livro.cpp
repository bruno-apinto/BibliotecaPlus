#include "Livro.h"
#include <iostream>
#include <string>
#include <vector>

/**
 * @brief Construtor de Livro(vazio)
 * 
 */
Livro::Livro() : Livro::Livro("A", "B", "C", "D", "F", "G", "H") {}

/**
 * @brief Construct a new Livro:: Livro object
 * 
 * @param nome 
 * @param autor 
 * @param ano 
 * @param edicao 
 * @param secao 
 * @param biblioteca 
 * @param editora 
 * @param numero 
 */
Livro::Livro(std::string nome, std::string autor, std::string ano,
    std::string edicao, std::string secao, std::string biblioteca, 
    std::string editora, std::string numero) : nome_(nome), autor_(autor), ano_(ano),
        edicao_(edicao), secao_(secao), biblioteca_(biblioteca),
        editora_(editora), numero_(numero), situacao_(situacaoEmprestimo::Disponivel) {}

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

std::string Livro::getSecao() const {
    return secao_;
}

std::string Livro::getBiblioteca() const {
    return biblioteca_;
}

std::string Livro::getEditora() const {
    return editora_;
}

std::string Livro::getNumero() const {
    return numero_;
}

SituacaoEmprestimo Livro::getSituacao() const {
    return situacao_;
}


bool Livro::comparar (Livro& livro){
   
    int indice = 1; //variavel auxiliar para comparar livros

    indice *= livro.getAno().compare(ano_);
    indice *= livro.getNome().compare(nome_);
    indice *= livro.getAutor().compare(autor_);
    indice *= livro.getEdicao().compare(edicao_);
    indice *= livro.getSecao().compare(secao_);
    indice *= livro.getEditora().compare(editora_);
    indice *= livro.getNumero().compare(numero_);

    return indice;
}

std::vector<Livro> Livro::procurarLivros

    (std::string parametro, std::string item, std::vector<Livro> livrosEncontrados) {
    
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

    else if (!(parametro.compare("Numero"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->getNumero().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("Secao"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->getSecao().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }
}