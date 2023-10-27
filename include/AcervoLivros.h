#ifndef ACERVOLIVROS_H
#define ACERVOLIVROS_H

#include "Aluno.h"
#include "Livro.h"
#include "Aluno.cpp"
#include <string>
#include <vector>

class AcervoLivros {
public:
    AcervoLivros(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula);

    std::vector<Livro> procurarLivros(std::string parametro, std::string item, std::vector<Livro> livrosEncontrados);
    void adicionarLivro(const Livro& livro); // função que permite adicionar livros ao AcervoLivros
    void removerLivro(const std::string& titulo); // função que permite remover livros do AcervoLivros
    void editarLivro(const std::string& titulo, const std::string& novoTitulo, const std::string& novoAutor, const std::string& novaEditora, const std::string& novosDetalhes); // função que permite editar as informações de livros no AcervoLivros
    void emprestarLivro(const Alunos& aluno, const Livro& livro); // função que atualiza a situação do livro para emprestado
    void receberLivro(const Alunos& aluno, const Livro& livro); // função que atualiza a situação do livro para recebido 
    
    /**
     * @brief Set the Situacao object
     * 
     * @param novaSituacao 
     */
    void setSituacao(SituacaoEmprestimo novaSituacao);

private:

    std::vector<Livro> AcervoLivros; // lista com os livros do AcervoLivros
    std::vector<Alunos> cadastros; // lista com os alunos cadastrados
};
#endif
