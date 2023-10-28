#include "include/Livro.h"
#include "include/Aluno.h"
#include <iostream>
#include "include/Situacao.h"

void Aluno::getEmail(){
    return email_;
}

void Aluno::getLogin(){
    return login_;
}

void Aluno::getMatricula(){
    return matricula_;
}

void Aluno::getNome(){
    return nome_;
}

void Aluno::getTelefone(){
    return telefone_;
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
        (std::string parametro, std::string item, std::vector<Livro> alunosEncontrados) 
{
    if (!(parametro.compare("Nome"))){

        std::vector<Aluno> auxiliar;
        for (auto it = alunosEncontrados.begin(); it != alunosEncontrados.end(); it++){
        
            if (it->getNome().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;
    }

    else if (!(parametro.compare("Telefone"))){

        std::vector<Aluno> auxiliar;
        for (auto it = alunosEncontrados.begin(); it != alunosEncontrados.end(); it++){
        
            if (it->getTelefone().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("Login"))){

        std::vector<Aluno> auxiliar;
        for (auto it = alunosEncontrados.begin(); it != alunosEncontrados.end(); it++){
    
            if (it->getLogin().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("Email"))){

        std::vector<Aluno> auxiliar;
        for (auto it = alunosEncontrados.begin(); it != alunosEncontrados.end(); it++){
        
            if (it->getEmail().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

    else if (!(parametro.compare("Matricula"))){

        std::vector<Aluno> auxiliar;
        for (auto it = alunosEncontrados.begin(); it != alunosEncontrados.end(); it++){
        
            if (it->getMatricula().compare(item)){
                auxiliar.push_back(*it);
            }
        }

        return auxiliar;

    }

}


