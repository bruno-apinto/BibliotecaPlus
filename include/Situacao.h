#ifndef SITUACAO_H
#define SITUACAO_H

#include <vector>
#include <string>
#include <chrono>

class Situacao {
public:
    // Situacao::Situacao();

    bool getSituacao();
    void setSituacao() const;
    const std::vector<std::string>& getLivrosEmprestados() const;
    int calcularMulta(const std::chrono::system_clock::time_point& dataDevolucao);

private:
    bool pendencia_; // atributo booleano que indica se existe pendência ou não
    //int multa_; // valor da multa a ser paga
    std::vector<std::string> livrosEmprestados_; // lista com os livros atualmente emprestados para o aluno
};

#endif // SITUACAO_H