
#include "Livro.h"
// #include "src/Livro.cpp"
#include "Situacao.h"
#include <string>
#include <vector>

class Aluno{
    public:

    //construtor de Aluno
    Aluno (std::string nome, std::string telefone, std::string login,
        std::string senha, std::string email, std::string matricula);
    
    // função que encontra o aluno dentro do arquivo
    std::vector<Aluno> procurarAlunos
            (std::string parametro, std::string item, std::vector<Livro> alunosEncontrados); 
            
    void consultarMeusDados();

    void getNome();
    void getTelefone();
    void getLogin();
    void getEmail();
    void getMatricula();
    
   private:
    std::string nome_;
    std::string telefone_;
    std::string login_;
    std::string senha_;
    std::string email_;
    std::string matricula_; 
    Situacao situacao_;
};

