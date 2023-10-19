#include "Livro.h"

Livro::Livro(std::string nome, std::string autor, std::string ano, std::string edicao, std::string secao, std::string bibliotecas, std::string editora, std::string numero)
    : nome(nome), autor(autor), ano(ano), edicao(edicao), secao(secao), bibliotecas(bibliotecas), editora(editora), numero(numero), situacao(SituacaoEmprestimo::Disponivel) {}

std::string Livro::GetNome() const {
    return nome;
}

std::string Livro::GetAutor() const {
    return autor;
}

std::string Livro::GetAno() const {
    return ano;
}

std::string Livro::GetEdicao() const {
    return edicao;
}

std::string Livro::GetSecao() const {
    return secao;
}

std::string Livro::GetBibliotecas() const {
    return bibliotecas;
}

std::string Livro::GetEditora() const {
    return editora;
}

std::string Livro::GetNumero() const {
    return numero;
}

SituacaoEmprestimo Livro::GetSituacao() const {
    return situacao;
}

void Livro::SetSituacao(SituacaoEmprestimo novaSituacao) {
    situacao = novaSituacao;
}