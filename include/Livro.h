#ifndef LIVRO_H
#define LIVRO_H

#include <string>
#include <vector>

/**
 * @brief Indica o status do livro
 * 
 */
enum status {
    Disponivel,
    Emprestado,
    Atrasado,
    Perdido
};

class Livro {
public:

    Livro (std::string nome, std::string autor, std::string ano, 
        std::string edicao, std::string editora, std::string ID);

        std::string dataEmprestimo;
    /**
     * @brief Get the Nome object
     * 
     * @return std::string nome_
     */
    std::string getNome() const;

    /**
     * @brief Get the Autor object
     * 
     * @return std::string autor_
     */
    std::string getAutor() const;

    /**
     * @brief Get the Ano object
     * 
     * @return std::string ano_
     */
    std::string getAno() const;

    /**
     * @brief Get the Edicao object
     * 
     * @return std::string edicao_
     */
    std::string getEdicao() const;

    /**
     * @brief Get the Editora object
     * 
     * @return std::string editora_
     */
    std::string getEditora() const;

    /**
     * @brief Get the Numero object
     * 
     * @return std::string numero_
     */
    std::string getID() const;

    /**
     * @brief Get the Situacao object
     * 
     * @return SituacaoEmprestimo 
     */
    std::string getStatus() const;

    
    /**
     * @brief 
     * 
     * @param livro 
     * @return true é igual
     * @return false é diferente
     */
    bool comparar (Livro& livro);

    /**
     * @brief Altera a situacao do livro
     * 
     * @param novoStatus 
     */
    void setStatus();


private:

    std::string nome_;
    std::string autor_;
    std::string ano_;
    std::string edicao_;
    std::string editora_;
    std::string ID_;
    std::string dataEmprestimo_;
    std::string status_;
};

#endif
