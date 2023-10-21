#include "Livro.h"
#include <iostream>
#include <string>
#include <vector>

Livro::Livro(std::string nome, std::string autor, std::string ano,
    std::string edicao, std::string secao, std::string bibliotecas, 
    std::string editora, std::string numero) : nome(nome), autor(autor), ano(ano),
        edicao(edicao), secao(secao), bibliotecas(bibliotecas),
        editora(editora), numero(numero), situacao(SituacaoEmprestimo::Disponivel) {}

std::string Livro::getNome() const {
    return nome;
}

std::string Livro::getAutor() const {
    return autor;
}

std::string Livro::getAno() const {
    return ano;
}

std::string Livro::getEdicao() const {
    return edicao;
}

std::string Livro::getSecao() const {
    return secao;
}

std::string Livro::getBibliotecas() const {
    return bibliotecas;
}

std::string Livro::getEditora() const {
    return editora;
}

std::string Livro::getNumero() const {
    return numero;
}

SituacaoEmprestimo Livro::getSituacao() const {
    return situacao;
}

void Livro::setSituacao(SituacaoEmprestimo novaSituacao) {
    situacao = novaSituacao;
}

bool Livro::comparar (Livro& livro){
    int indice = 1;

    indice *= livro.ano.compare(ano);
    indice *= livro.nome.compare(nome);
    indice *= livro.autor.compare(autor);
    indice *= livro.edicao.compare(edicao);
    indice *= livro.secao.compare(secao);
    indice *= livro.editora.compare(editora);
    indice *= livro.numero.compare(numero);

    return indice;
}

std::vector<Livro> Livro::procurarLivros
    (std::string parametro, std::string item, std::vector<Livro> livrosEncontrados) {
    
    if (!(parametro.compare("Autor"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->autor.compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;
    }

    else if (!(parametro.compare("Nome"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->nome.compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("Editora"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->editora.compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("Ano"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->ano.compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("Edicao"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->edicao.compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("Numero"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->numero.compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("Secao"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
        
            if (it->secao.compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }
}