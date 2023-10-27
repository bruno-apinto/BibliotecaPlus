#ifndef ACERVOALUNOS_H
#define ACERVOALUNOS_H

#include "Aluno.h"
#include "Aluno.cpp"
#include <string>
#include <vector>

void editarPessoa(const std::string& matricula, const std::string& novoNome, const std::string& novaSenha, const std::string& novoEmail); // função que permite editar as informações do cadastro de usuários
void removerPessoa(const std::string& matricula); // função que permite remover cadastros
void adicionarPessoa(const Alunos& aluno); // função que permite adicionar cadastro de novas pessoas