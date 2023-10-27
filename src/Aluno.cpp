#include "Aluno.h"
#include "Livro.h"
#include "Livro.h"
#include <iostream>

Alunos::Alunos(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula) {
    usuario.nome = nome;
    usuario.telefone = telefone;
    usuario.login = login;
    usuario.senha = senha;
    usuario.email = email;
    usuario.matricula = matricula;

    situacao.pendencia = false;
    situacao.multa = 0;
    
}

void Alunos::ConsultarDados() {
    std::cout << "Nome: " << usuario.nome << std::endl;
    std::cout << "Telefone: " << usuario.telefone << std::endl;
    std::cout << "Login: " << usuario.login << std::endl;
    std::cout << "Email: " << usuario.email << std::endl;
    std::cout << "Matrícula: " << usuario.matricula << std::endl;
}

std::vector<Livro> livrosEncontrados = Livro::procurarLivros(parametro, item, listaDeLivros);

void Alunos::ConsultarSituacao() {
    std::cout << "Pendência: " << (situacao.pendencia ? "Sim" : "Não") << std::endl;
    std::cout << "Multa: " << situacao.multa << " reais" << std::endl;
    // Mostrar informações sobre livros emprestados e histórico de empréstimos. Histórico, livros emprestados
}
