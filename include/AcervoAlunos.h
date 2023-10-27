#ifndef ACERVOALUNOS_H
#define ACERVOALUNOS_H

#include "Aluno.h"
#include "Aluno.cpp"
#include <string>
#include <vector>

class AcervoAlunos {

public:

void editarAluno(const std::string& matricula, const std::string& novoNome, const std::string& novaSenha, const std::string& novoEmail); // função que permite editar as informações do cadastro de usuários
void removerAluno(const std::string& matricula); // função que permite remover cadastros
void adicionarAluno(const Alunos& aluno); // função que permite adicionar cadastro de novas pessoas

private:

std::vector<Alunos> cadastros; // lista com os alunos cadastrados
};

#endif