#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

#include "Aluno.h"
#include "Aluno.cpp"
#include <string>
#include <vector>

class Bibliotecario {
public:
    Bibliotecario(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula);

    std::vector<Livro> ProcurarLivrosPorTitulo(Alunos& aluno, std::string titulo);
    std::vector<Livro> ProcurarLivrosPorAutor(Alunos& aluno, std::string autor);
    std::vector<Livro> ProcurarLivrosPorEditora(Alunos& aluno, std::string editora);
    void EditarAcervoAdicionarLivro(const Livro& livro);
    void EditarAcervoRemoverLivro(const std::string& titulo);
    void EditarAcervoEditarLivro(const std::string& titulo, const std::string& novoTitulo, const std::string& novoAutor, const std::string& novaEditora, const std::string& novosDetalhes);
    void EditarCadastrosAdicionarPessoa(const Alunos& aluno);
    void EditarCadastrosRemoverPessoa(const std::string& matricula);
    void EditarCadastrosEditarPessoa(const std::string& matricula, const std::string& novoNome, const std::string& novaSenha, const std::string& novoEmail);
    void EmprestarLivro(const Alunos& aluno, const Livro& livro);
    void ReceberLivro(const Alunos& aluno, const Livro& livro);

private:
    struct Pessoa {
        std::string nome;
        std::string telefone;
        std::string login;
        std::string senha;
        std::string email;
        std::string matricula;
    };

    std::vector<Livro> acervo;
    std::vector<Alunos> cadastros;
};
#endif
