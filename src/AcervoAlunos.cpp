#include "../include/AcervoAlunos.h"
#include "../include/Aluno.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <cstring>

AcervoAlunos::AcervoAlunos() {}

std::vector<Aluno> AcervoAlunos::procurarAlunos(std::string categoria, std::string item){
    std::vector<Aluno> lista; 
}

std::vector<Aluno> AcervoAlunos::procurarAlunos(std::string categoria, std::string item, std::vector<Aluno> alunosEncontrados) {
    std::vector<Aluno> auxiliar;

    for (auto it = alunosEncontrados.begin(); it != alunosEncontrados.end(); it++) {
        if (categoria == "Nome" && it->getNome() == item) {
            auxiliar.push_back(*it);
        } else if (categoria == "Telefone" && it->getTelefone() == item) {
            auxiliar.push_back(*it);
        } else if (categoria == "Login" && it->getLogin() == item) {
            auxiliar.push_back(*it);
        } else if (categoria == "Email" && it->getEmail() == item) {
            auxiliar.push_back(*it);
        } else if (categoria == "Matricula" && it->getMatricula() == item) {
            auxiliar.push_back(*it);
        }
    }

    return auxiliar;
}

std::string formatacao (Aluno& aluno) {
    //formata a organizacao dos dados do arquivo

    std::string linha;
    linha = aluno.getNome();
    linha += " | " + aluno.getLogin();
    linha += " | " + aluno.getSenha();
    linha += " | " + aluno.getMatricula();
    linha += " | " + aluno.getEmail();
    linha += " | " + aluno.getTelefone();
    return linha;
}

void AcervoAlunos::adicionarAluno(Aluno& aluno) {

   std::ofstream adicionar ("arquivos/Alunos/alunos.txt", std::ios::app);
   std::string linha;
   
   linha = formatacao(aluno);

   adicionar << linha <<std:endl;
   adicionar.close();
}

void AcervoAlunos::removerAluno(Aluno& aluno) {

    std::ifstream leitura ("arquivos/Alunos/alunos.txt");

    std::string excluir = formatacao(aluno);

    std::vector<std::string> linhas;
    std::string linha;

    while (leitura, linha){
        if (!strcmp(linha, excluir)) continue;
        linhas.push_back(linha);
    }

    leitura.close();

    std::ofstream novo ("arquivos/Alunos/alunos.txt");
    for (auto it = linhas.begin(); it != linhas.end(); it++){
        novo << *it <<std::endl;
    }

    novo.close();
}

void AcervoAlunos::editarAluno(std::string categoria, std::string novoDado, Aluno& aluno) {

    Aluno novoAluno;
    
    switch (categoria){ //destina à catgeoria escolhida na entrada
        case "Nome":
            
                novoAluno (novoDado, aluno.getTelefone(), aluno.getLogin(),
                            aluno.getSenha(), aluno.getEmail(), aluno.getMatricula());
            
            break;

        case "Login":
            
                novoAluno (aluno.getNome, aluno.getTelefone(), novoDado,
                            aluno.getSenha(), aluno.getEmail(), aluno.getMatricula());
            
            break;

        case "Senha":
            novoAluno (aluno.getNome(), aluno.getTelefone(), aluno.getLogin(),
                            novoDado, aluno.getEmail(), aluno.getMatricula());
            break;
    
        case "Matricula":
        case "Matrícula":
            
            novoAluno (aluno.getNome(), aluno.getTelefone(), aluno.getLogin(),
                            aluno.getSenha(), aluno.getEmail(), novoDado);
            
            break;

        case "Email":
            novoAluno (aluno.getNome, aluno.getTelefone(), aluno.getLogin(),
                            aluno.getSenha(), novoDado, aluno.getMatricula());
            break;

        case "Telefone":
            novoAluno (aluno.getNome(), novoDado, aluno.getLogin(),
                            aluno.getSenha(), aluno.getEmail(), aluno.getMatricula());
            
            break;
    }


}