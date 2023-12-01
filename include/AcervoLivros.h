#ifndef ACERVOLIVROS_H
#define ACERVOLIVROS_H

#include "Aluno.h"
#include "Livro.h"
#include <string>
#include <vector>

class AcervoLivros {
public:

        /**
         * @brief Construtor padrão de Acervo livros
         * 
         */
    AcervoLivros();

    /**
     * @brief Procura livro dentro do arquivo Livros.txt
     * 
     */
    std::vector<Livro> procurarLivros(std::string categoria, std::string item);

        /**
         * @brief Procura livro dentro de um vetor de livros
         * 
         * @param categoria 
         * @param item 
         * @param livrosEncontrados 
         * @return std::vector<Livro> 
         */
    std::vector<Livro> procurarLivros(std::string categoria, std::string item, std::vector<Livro> livrosEncontrados);
    
    /**
     * @brief Adiciona um Livro aos arquivos status.txt e livro.txt
     * 
     */
    void adicionarLivro( Livro& livro);

    /**
     * @brief Remove um livro do arquivo Livros.txt
     * 
     * @param titulo 
     */
    void removerLivro(std::string& titulo); 
    
    /**
     * @brief Edita as informacoes de um livro em Livros.txt
     * 
     * @param titulo 
     * @param novoTitulo 
     * @param novoAutor 
     * @param novaEditora 
     * @param novosDetalhes 
     */
    void editarLivro(std::string& titulo, std::string& novoTitulo, std::string& novoAutor, std::string& novaEditora, std::string& novosDetalhes); // função que permite editar as informações de livros no AcervoLivros
    
    /**
     * @brief Atualiza o status de um livro em status.txt para emprestado
     * 
     * @param aluno 
     * @param livro 
     */
    void emprestarLivro(Alunos& aluno, Livro& livro); 
    
    /**
     * @brief Atualiza o status do livro em status.txt para disponivel
     * 
     * @param aluno 
     * @param livro 
     */
    void receberLivro( Alunos& aluno, Livro& livro); 

    /**
     * @brief retorna lista de livros achados
     * 
     * @param parametro 
     * @param item 
     * @param livrosEncontradoss 
     * @return livrosEncontrados vector<livros>
     */
    std::vector<Livro> procurarLivros 
            (std::string categoria, std::string item, std::vector<Livro> livrosEncontrados);
    /**
     * @brief 
     * 
     * @param parametro 
     * @param item 
     * @return std::vector<Livro> 
     */
    std::vector<Livro> procurarLivros 
            (std::string categoria, std::string item);
};
#endif