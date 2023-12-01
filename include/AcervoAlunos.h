// #ifndef ACERVOALUNOS_H
// #define ACERVOALUNOS_H

#include "./Aluno.h"
#include <string>
#include <vector>

class AcervoAlunos {

public:

AcervoAlunos();
/**
 * @brief Edita o cadastro de um aluno, removendo o cadastro antigo e apendicionando um novo a alunos.txt
 * 
 * @param categoria 
 * @param novo 
 * @param Aluno 
 */
void editarAluno(std::string categoria, std::string novo, Aluno& Aluno);

/**
 * @brief Remove um Aluno de alunos.txt
 * 
 * @param aluno 
 */
void removerAluno(Aluno& aluno);

/**
 * @brief Apendiciona um Aluno a alunos.txt
 * 
 * @param aluno 
 */
void adicionarAluno(Aluno& aluno);

/**
     * @brief Procura alunos dentro de um vetor de alunos
     * 
     * @param categoria 
     * @param item 
     * @param alunosEncontrados 
     * @return std::vector<Aluno> 
     */
    std::vector<Aluno> procurarAlunos
            (std::string categoria, std::string item, std::vector<Aluno> alunosEncontrados); 

        /**
         * @brief Procura alunos no arquivo Aluno.txt
         * 
         * @param categoria 
         * @param item 
         * @return std::vector<Aluno> 
         */
    std::vector<Aluno> procurarAlunos
            (std::string categoria, std::string item);

};

// #endif