#include "include/Livro.h"
#include "include/Aluno.h"
#include <iostream>
#include "include/Situacao.h"

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

Aluno::Aluno(){
    this->nome_ = "000";
    this->login_ = "000";
    this->senha_ = "000";
    this->matricula_ = "000";
    this->email_ = "000";
    this->telefone_ = "000";
}

Aluno::Aluno(std::string nome, std::string telefone, std::string login,
                std::string senha, std::string email, std::string matricula)
{
    nome_ = nome;
    telefone_ = telefone;
    login_ = login;
    senha_ = senha;
    email_ = email;
    matricula_ =  matricula;
}
void Aluno::consultarMeusDados() {
    std::cout << "Nome: " << nome_ << std::endl;
    std::cout << "Telefone: " << telefone_ << std::endl;
    std::cout << "Login: " << login_ << std::endl;
    std::cout << "Email: " << email_ << std::endl;
    std::cout << "Matrícula: " << matricula_ << std::endl;
}

std::vector<Aluno> Aluno::procurarAlunos 
        (std::string categoria, std::string item, std::vector<Livro> alunosEncontrados) 
{
    if (!(categoria.compare("Nome"))){

        std::vector<Aluno> auxiliar;
        for (auto it = alunosEncontrados.begin(); it != alunosEncontrados.end(); it++){
        
            if (it->getNome().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;
    }

    else if (!(categoria.compare("Telefone"))){

        std::vector<Aluno> auxiliar;
        for (auto it = alunosEncontrados.begin(); it != alunosEncontrados.end(); it++){
        
            if (it->getTelefone().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(categoria.compare("Login"))){

        std::vector<Aluno> auxiliar;
        for (auto it = alunosEncontrados.begin(); it != alunosEncontrados.end(); it++){
    
            if (it->getLogin().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(categoria.compare("Email"))){

        std::vector<Aluno> auxiliar;
        for (auto it = alunosEncontrados.begin(); it != alunosEncontrados.end(); it++){
        
            if (it->getEmail().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(categoria.compare("Matricula"))){

        std::vector<Aluno> auxiliar;
        for (auto it = alunosEncontrados.begin(); it != alunosEncontrados.end(); it++){
        
            if (it->getMatricula().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

}


