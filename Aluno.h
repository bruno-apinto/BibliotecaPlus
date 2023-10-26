#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include <vector>
#include "Structs.h"
#include "Livro.h"

class Alunos {
public:
    Alunos(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula);

    void ConsultarDados(); 
    void ConsultarSituacao();
    std::vector<Livro> procurarLivros(std::string parametro, std::string item, std::vector<Livro> livrosEncontrados);
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
        bool pendencia;
        int multa;
        std::vector<std::string> livrosEmprestados;
    };
    
#endif ALUNO_H