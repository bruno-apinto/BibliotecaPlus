#ifndef LIVRO_H
#define LIVRO_H

#include <string>

enum class SituacaoEmprestimo {
    Disponivel,
    Emprestado,
    Atrasado,
    Perdido
};

class Livro {
public:
    Livro(std::string nome, std::string autor, std::string ano, std::string edicao, std::string secao, std::string bibliotecas, std::string editora, std::string numero);

    std::string GetNome() const;
    std::string GetAutor() const;
    std::string GetAno() const;
    std::string GetEdicao() const;
    std::string GetSecao() const;
    std::string GetBibliotecas() const;
    std::string GetEditora() const;
    std::string GetNumero() const;
    SituacaoEmprestimo GetSituacao() const;
    void SetSituacao(SituacaoEmprestimo novaSituacao);

private:
    std::string nome;
    std::string autor;
    std::string ano;
    std::string edicao;
    std::string secao;
    std::string bibliotecas;
    std::string editora;
    std::string numero;
    SituacaoEmprestimo situacao;
};

#endif
