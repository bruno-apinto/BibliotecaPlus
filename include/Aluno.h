// #include "Livro.h"
#include "../include/Situacao.h"
#include <string>
#include <vector>

class Aluno{
    public:

    /**
     * @brief Construtor padrão
     * 
     */
    // Aluno (): Aluno("A", "B", "C", "D", "E", "F", false);

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
        std::string senha, std::string email, std::string matricula, bool pendencia);
    
    
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

    /**
     * @brief mostra a situacao do aluno
     * 
     * @return Situacao 
     */
    Situacao getSituacao();

    /**
     * @brief Altera a situacao da pessoa com a biblioteca
     * 
     * @param pendencia 
     */
    void setSituacao(bool pendencia);
    
   private:
    std::string nome_;
    std::string telefone_;
    std::string login_;
    std::string senha_;
    std::string email_;
    std::string matricula_;
    Situacao situacao_;
};

