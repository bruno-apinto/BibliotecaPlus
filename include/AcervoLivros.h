#ifndef ACERVO_H
#define ACERVO_H

#include "Aluno.h"
#include "Livro.h"
#include "Aluno.cpp"
#include <string>
#include <vector>

struct Pessoa {
        std::string nome;
        std::string telefone;
        std::string login;
        std::string senha;
        std::string email;
        std::string matricula;
    };

class Acervo {
public:
    Acervo(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula);

    std::vector<Livro> procurarLivros(std::string parametro, std::string item, std::vector<Livro> livrosEncontrados);
    void adicionarLivro(const Livro& livro); // função que permite adicionar livros ao acervo
    void removerLivro(const std::string& titulo); // função que permite remover livros do acervo
    void editarLivro(const std::string& titulo, const std::string& novoTitulo, const std::string& novoAutor, const std::string& novaEditora, const std::string& novosDetalhes); // função que permite editar as informações de livros no acervo
    void adicionarPessoa(const Alunos& aluno); // função que permite adicionar cadastro de novas pessoas
    void removerPessoa(const std::string& matricula); // função que permite remover cadastros
    void editarPessoa(const std::string& matricula, const std::string& novoNome, const std::string& novaSenha, const std::string& novoEmail); // função que permite editar as informações do cadastro de usuários
    void emprestarLivro(const Alunos& aluno, const Livro& livro); // função que atualiza a situação do livro para emprestado
    void receberLivro(const Alunos& aluno, const Livro& livro); // função que atualiza a situação do livro para recebido 
    
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