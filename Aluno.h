#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include <vector>

class Alunos {
public:
    Alunos(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula);

    void ConsultarDados();
    void ProcurarLivros(std::string busca);
    void ConsultarSituacao();
    std::vector<Livro> ProcurarLivrosPorTitulo(std::string titulo);
    std::vector<Livro> ProcurarLivrosPorAutor(std::string autor);
    std::vector<Livro> ProcurarLivrosPorEditora(std::string editora);

private:
    struct Pessoa {
        std::string nome;
        std::string telefone;
        std::string login;
        std::string senha;
        std::string email;
        std::string matricula;
    };

    struct Situacao {
        bool pendencia;
        int multa;
        std::vector<std::string> livrosEmprestados;
        std::vector<std::string> historicoEmprestimos;
    };

    Pessoa usuario;
    Situacao situacao;
};

#endif