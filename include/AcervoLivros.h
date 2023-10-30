#ifndef ACERVOLIVROS_H
#define ACERVOLIVROS_H

#include "Aluno.h"
#include "Livro.h"
#include "Aluno.cpp"
#include <string>
#include <vector>

class AcervoLivros {
public:

    std::vector<Livro> procurarLivros(std::string parametro, std::string item, std::vector<Livro> livrosEncontrados);
    void adicionarLivro( Livro& livro); // função que permite adicionar livros ao AcervoLivros
    void removerLivro(std::string& titulo); // função que permite remover livros do AcervoLivros
    void editarLivro(std::string& titulo, std::string& novoTitulo, std::string& novoAutor, std::string& novaEditora, std::string& novosDetalhes); // função que permite editar as informações de livros no AcervoLivros
    void emprestarLivro(Alunos& aluno, Livro& livro); // função que atualiza a situação do livro para emprestado
    void receberLivro( Alunos& aluno, Livro& livro); // função que atualiza a situação do livro para recebido 
};
#endif