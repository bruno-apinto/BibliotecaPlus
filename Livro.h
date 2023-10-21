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
    Livro::Livro (std::string nome, std::string autor, std::string ano, 
        std::string edicao, std::string secao, std::string bibliotecas,
        std::string editora, std::string numero);

    std::string getNome() const;
    std::string getAutor() const;
    std::string getAno() const;
    std::string getEdicao() const;
    std::string getSecao() const;
    std::string getBibliotecas() const;
    std::string getEditora() const;
    std::string getNumero() const;
    SituacaoEmprestimo getSituacao() const;
    void setSituacao(SituacaoEmprestimo novaSituacao);

    bool Livro::comparar (Livro& livro);

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
