#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

#include "Aluno.h"
#include "Aluno.cpp"
#include <string>
#include <vector>

class Bibliotecario {
public:
    Bibliotecario(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula);

    std::vector<Livro> ProcurarLivrosPorTitulo(Alunos& aluno, std::string titulo); // lista que retorna a busca de livros por título
    std::vector<Livro> ProcurarLivrosPorAutor(Alunos& aluno, std::string autor); // lista que retorna a busca de livros por autor
    std::vector<Livro> ProcurarLivrosPorEditora(Alunos& aluno, std::string editora); // lista que retorna a busca de livros por editora
    void EditarAcervoAdicionarLivro(const Livro& livro); // função que permite adicionar livros ao acervo
    void EditarAcervoRemoverLivro(const std::string& titulo); // função que permite remover livros do acervo
    void EditarAcervoEditarLivro(const std::string& titulo, const std::string& novoTitulo, const std::string& novoAutor, const std::string& novaEditora, const std::string& novosDetalhes); // função que permite editar as informações de livros no acervo
    void EditarCadastrosAdicionarPessoa(const Alunos& aluno); // função que permite adicionar cadastro de novas pessoas
    void EditarCadastrosRemoverPessoa(const std::string& matricula); // função que permite remover cadastros
    void EditarCadastrosEditarPessoa(const std::string& matricula, const std::string& novoNome, const std::string& novaSenha, const std::string& novoEmail); // função que permite editar as informações do cadastro de usuários
    void EmprestarLivro(const Alunos& aluno, const Livro& livro); // função que atualiza a situação do livro para emprestado
    void ReceberLivro(const Alunos& aluno, const Livro& livro); // função que atualiza a situação do livro para recebido 
    
    /**
     * @brief Set the Situacao object
     * 
     * @param novaSituacao 
     */
    void setSituacao(SituacaoEmprestimo novaSituacao);

private:
    struct Pessoa { // struct dos dados do usuário
        std::string nome;
        std::string telefone;
        std::string login;
        std::string senha;
        std::string email;
        std::string matricula;
    };

    std::vector<Livro> acervo; // lista com os livros do acervo
    std::vector<Alunos> cadastros; // lista com os alunos cadastrados
};
#endif
