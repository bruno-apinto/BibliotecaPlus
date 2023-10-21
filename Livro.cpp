#include "Livro.h"

Livro::Livro(std::string nome, std::string autor, std::string ano,
    std::string edicao, std::string secao, std::string bibliotecas, 
    std::string editora, std::string numero) :
        nome(nome), autor(autor), ano(ano),
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