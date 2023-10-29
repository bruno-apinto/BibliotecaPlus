#include "include/AcervoAlunos.h"
#include "include/Aluno.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

std::string formatacao (Aluno& aluno) {
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

void AcervoAlunos::editarPessoa(std::string categoria, std::string novo, Aluno& aluno) {

}