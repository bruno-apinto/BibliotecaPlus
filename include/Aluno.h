
#include "Livro.h"
// #include "src/Livro.cpp"
#include "Situacao.h"
#include <string>
#include <vector>

class Aluno{
    public:
    Aluno(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula);
    
    // Aluno::procurarAlunos(); // função que encontra o aluno dentro do arquivo
    void consultarMeusDados();
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
   private:
    std::string nome_;
    std::string telefone_;
    std::string login_;
    std::string senha_;
    std::string email_;
    std::string matricula_; 
    Situacao situacao_;
};

/**
     * @brief caracteristicas da situação do aluno:
     * pendencia (true/false)
     * multa (int)
     * livrosEmprestados (vector)
     * historicoEmprestimos (vector)
     * 
     */
