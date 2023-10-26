#ifndef LIVRO_H
#define LIVRO_H

#include <string>

enum class situacaoEmprestimo {
    Disponivel,
    Emprestado,
    Atrasado,
    Perdido
};

class Livro {
public:

    Livro::Livro (std::string nome, std::string autor, std::string ano, 
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
     * @brief Get the Biblioteca object
     * 
     * @return std::string biblioteca_
     */
    std::string getBiblioteca() const;

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
    SituacaoEmprestimo getSituacao() const;

    
    /**
     * @brief 
     * 
     * @param livro 
     * @return true é igual
     * @return false é diferente
     */
    bool Livro::comparar (Livro& livro);

    /**
     * @brief 
     * 
     * @param parametro 
     * @param item 
     * @param livrosEncontradoss 
     * @return livrosEncontrados vector<livros>
     */
    std::vector<Livro> procurarLivros 
            (std::string parametro, std::string item, std::vector<Livro> livrosEncontrados);

private:

    std::string nome_;
    std::string autor_;
    std::string ano_;
    std::string edicao_;
    std::string biblioteca_;
    std::string editora_;
    std::string ID_;
    string dataEmprestimo_;
    SituacaoEmprestimo situacao_;
};

#endif
