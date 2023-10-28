#include "include/Livro.h"
#include "include/Aluno.h"
#include <iostream>
#include "include/Situacao.h"

Aluno::Aluno(std::string nome, std::string telefone, std::string login,std::string senha, std::string email, std::string matricula, bool sit)
{
    nome_ = nome;
    telefone_ = telefone;
    login_ = login;
    senha_ = senha;
    email_ = email;
    matricula_ =  matricula;
    situacao_.Situacao();
}
void Aluno::consultarMeusDados() {
    std::cout << "Nome: " << nome_ << std::endl;
    std::cout << "Telefone: " << telefone_ << std::endl;
    std::cout << "Login: " << login_ << std::endl;
    std::cout << "Email: " << email_ << std::endl;
    std::cout << "Matrícula: " << matricula_ << std::endl;
}


