#include "Livro.h"
#include "Situacao.h"
#include <string>
#include <vector>

class Aluno{
    public:

    Aluno ();
    /**
     * @brief Construtor de Aluno
     * 
     * @param nome 
     * @param telefone 
     * @param login 
     * @param senha 
     * @param email 
     * @param matricula 
     */
    Aluno (std::string nome, std::string telefone, std::string login,
        std::string senha, std::string email, std::string matricula);
    
    /**
     * @brief Funcao retorna um a lista de alunos procurados
     * 
     * @param categoria 
     * @param item 
     * @param alunosEncontrados 
     * @return std::vector<Aluno> 
     */
    std::vector<Aluno> procurarAlunos
            (std::string categoria, std::string item, std::vector<Livro> alunosEncontrados); 
            
    /**
     * @brief Imprime os dados do cadastro na tela
     * 
     */
    void consultarMeusDados();

    /**
     * @brief Retorna o nome
     * 
     */
    std::string getNome();

    /**
     * @brief Retorna o telefone
     * 
     */
    std::string getTelefone();

    /**
     * @brief Retorna o login
     * 
     */
    std::string getLogin();

    /**
     * @brief Retorna o email
     * 
     */
    std::string getEmail();

    /**
     * @brief Retorna a matricula
     * 
     */
    std::string getMatricula();

    /**
     * @brief retorna a senha do aluno
     * 
     * @return std::string senha
     */
    std::string getSenha();
    
   private:
    std::string nome_;
    std::string telefone_;
    std::string login_;
    std::string senha_;
    std::string email_;
    std::string matricula_; 
    Situacao situacao_;
};

