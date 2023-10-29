#ifndef ACERVOALUNOS_H
#define ACERVOALUNOS_H

#include "Aluno.h"
#include <string>
#include <vector>

class AcervoAlunos {

public:

void editarAluno(std::string categoria, std::string novo, Aluno& Aluno); // função que permite editar as informações do cadastro de usuários
void removerAluno(Aluno& aluno); // função que permite remover cadastros
void adicionarAluno(Aluno& aluno); // função que permite adicionar cadastro de novas pessoas

private:

std::vector<Aluno> cadastros; // lista com os alunos cadastrados
};



#endif