#include "include/Aluno.h"
#include "include/Livro.h"
#include <iostream>
#include <string.h>

Aluno::Aluno(std::string nome, std::string telefone, std::string login,
                 std::string senha, std::string email, std::string matricula)
{
    nome_ = nome;
    telefone_ = telefone;
    login_ = login;
    senha_ = senha;
    email_ = email;
    matricula_ =  matricula;
    situacao.pendencia = false;
    situacao.multa = 0;
    situacao.livrosEmprestados.clear();
}

void Aluno::consultarDados() {
    std::cout << "Nome: " << usuario.nome << std::endl;
    std::cout << "Telefone: " << usuario.telefone << std::endl;
    std::cout << "Login: " << usuario.login << std::endl;
    std::cout << "Email: " << usuario.email << std::endl;
    std::cout << "Matrícula: " << usuario.matricula << std::endl;
}


void consultarSituacao() {
    
}