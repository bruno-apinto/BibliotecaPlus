#ifndef SITUACAO_H
#define SITUACAO_H

#include <vector>
#include <string>
#include <chrono>

class Situacao {
public:

    /**
     * @brief Construtor de Situacao
     * 
     */
    Situacao();

    /**
     * @brief Retorna se há pendencia ou nao
     * 
     * @return true 
     * @return false 
     */
    bool getSituacao();

    /**
     * @brief altera se ha pendencia ou nao
     * 
     * @param pendencia 
     */
    void setSituacao(bool pendencia); 

    /**
     * @brief Retorna os livros que foram emprestados
     * 
     * @return const std::vector<std::string>& 
     */
    const std::vector<std::string>& getLivrosEmprestados() const;

    /**
     * @brief Calcula a multa que devera ser paga, caso o livro esteja atrasado
     * 
     * @param dataDevolucao 
     * @return int 
     */
    int calcularMulta(const std::chrono::system_clock::time_point& dataDevolucao);

    /**
     * @brief adiciona o livro na lista de livros emprestados
     * 
     * @param adicionar 
     */
    void addLivro (std::string& adicionar); 

    /**
     * @brief retorna valor da multa a pagar
     * 
     * @return int 
     */
    int getMulta(); 
private:
    bool pendencia_; // atributo booleano que indica se existe pendência ou não
    int multa_; // valor da multa a ser paga
    std::vector<std::string> livrosEmprestados_; // lista com os livros atualmente emprestados para o aluno
                                                //armazena o ID de cada livro
};

#endif // SITUACAO_H