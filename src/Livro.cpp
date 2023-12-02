#include "../include/Livro.h"
#include <iostream>
#include <string>
#include <vector>

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

