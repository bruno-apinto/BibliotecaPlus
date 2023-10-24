#ifndef ALUNO_H
#define ALUNO_H
#include "Livro.h"
#include "src/Livro.cpp"

#include <string>
#include <vector>

struct Pessoa {
        std::string nome;
        std::string telefone;
        std::string login;
        std::string senha;
        std::string email;
        std::string matricula;
    };


class Alunos {
public:
    Alunos(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula);

    void ConsultarDados(); // função que mostra os dados do aluno
    void ConsultarSituacao(); // função que mostra a situação (se há empréstimos, pendências...)
    std::vector<Livro> ProcurarLivrosPorTitulo(std::string titulo); 
    std::vector<Livro> ProcurarLivrosPorAutor(std::string autor);
    std::vector<Livro> ProcurarLivrosPorEditora(std::string editora);

    /*
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
    */

    Pessoa usuario;
    Situacao situacao;
};

/**
     * @brief caracteristicas da situação do aluno:
     * pendencia (true/false)
     * multa (int)
     * livrosEmprestados (vector)
     * historicoEmprestimos (vector)
     * 
     */

    struct Situacao {
        bool pendencia; // atributo booleano que indica se existe pendência ou não
        int multa; // valor da multa a ser paga
        std::vector<std::string> livrosEmprestados; // lista com os livros atualmente emprestados para o aluno
        std::vector<std::string> historicoEmprestimos; // lista com os livros já emprestados ao usuário
    };
    
#endif ALUNO_H
