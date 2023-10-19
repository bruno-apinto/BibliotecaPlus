#include "Aluno.h"
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
    // Inicializar outras informações da Situação, como livrosEmprestados e historicoEmprestimos, conforme necessário.
}

void Alunos::ConsultarDados() {
    std::cout << "Nome: " << usuario.nome << std::endl;
    std::cout << "Telefone: " << usuario.telefone << std::endl;
    std::cout << "Login: " << usuario.login << std::endl;
    std::cout << "Email: " << usuario.email << std::endl;
    std::cout << "Matrícula: " << usuario.matricula << std::endl;
}

std::vector<Livro> Alunos::ProcurarLivrosPorTitulo(std::string titulo) {
    std::vector<Livro> livrosEncontrados;
    for (const Livro& livro : listaDeLivros) {
        if (livro.GetTitulo() == titulo) {
            livrosEncontrados.push_back(livro);
        }
    }
    return livrosEncontrados;
}

std::vector<Livro> Alunos::ProcurarLivrosPorAutor(std::string autor) {
    std::vector<Livro> livrosEncontrados;
    for (const Livro& livro : listaDeLivros) {
        if (livro.GetAutor() == autor) {
            livrosEncontrados.push_back(livro);
        }
    }
    return livrosEncontrados;
}

std::vector<Livro> Alunos::ProcurarLivrosPorEditora(std::string editora) {
    std::vector<Livro> livrosEncontrados;
    for (const Livro& livro : listaDeLivros) {
        if (livro.GetEditora() == editora) {
            livrosEncontrados.push_back(livro);
        }
    }
    return livrosEncontrados;
}

void Alunos::ConsultarSituacao() {
    std::cout << "Pendência: " << (situacao.pendencia ? "Sim" : "Não") << std::endl;
    std::cout << "Multa: " << situacao.multa << " reais" << std::endl;
    // Mostrar informações sobre livros emprestados e histórico de empréstimos.
}
