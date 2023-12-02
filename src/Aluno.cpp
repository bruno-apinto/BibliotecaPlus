#include "include/Aluno.h"
#include <iostream>
#include "include/Situacao.h"

Aluno::Aluno(std::string nome, std::string telefone, std::string login,
                std::string senha, std::string email, std::string matricula, bool pendencia)
{
    nome_ = nome;
    telefone_ = telefone;
    login_ = login;
    senha_ = senha;
    email_ = email;
    matricula_ =  matricula;
    situacao_.setSituacao(pendencia);

}

std::string Aluno::getEmail(){
    return email_;
}

std::string Aluno::getLogin(){
    return login_;
}

std::string Aluno::getMatricula(){
    return matricula_;
}

std::string Aluno::getNome(){
    return nome_;
}

std::string Aluno::getTelefone(){
    return telefone_;
}

std::string Aluno::getSenha() {
    return senha_;
}
Situacao Aluno::getSituacao() {
    return situacao_;
}

void Aluno::consultarMeusDados() {
    std::cout << "Nome: " << nome_ << std::endl;
    std::cout << "Telefone: " << telefone_ << std::endl;
    std::cout << "Login: " << login_ << std::endl;
    std::cout << "Email: " << email_ << std::endl;
    std::cout << "Matrícula: " << matricula_ << std::endl;
}

void Aluno::setSituacao(bool situacao){

}


