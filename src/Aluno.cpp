#include "include/Aluno.h"
#include "include/Livro.h"
#include <iostream>
#include <string.h>

Alunos::Alunos(std::string nome, std::string telefone, std::string login,
                 std::string senha, std::string email, std::string matricula)
{
    usuario.nome = nome;
    usuario.telefone = telefone;
    usuario.login = login;
    usuario.senha = senha;
    usuario.email = email;
    usuario.matricula = matricula;

    situacao.pendencia = false;
    situacao.multa = 0;
    situacao.livrosEmprestados.clear();
    situacao.historicoEmprestimos.clear();
}

void Alunos::consultarDados() {
    std::cout << "Nome: " << usuario.nome << std::endl;
    std::cout << "Telefone: " << usuario.telefone << std::endl;
    std::cout << "Login: " << usuario.login << std::endl;
    std::cout << "Email: " << usuario.email << std::endl;
    std::cout << "Matrícula: " << usuario.matricula << std::endl;
}


void consultarSituacao()