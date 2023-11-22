#ifndef SITUACAO_H
#define SITUACAO_H

#include <vector>
#include <string>
#include <chrono>

class Situacao {
public:
    Situacao();//construtor de situacao
    bool getSituacao(); //retorna se a pendencia ou nao
    void setSituacao(bool pendencia); //altera se ha pendencia ou nao
    const std::vector<std::string>& getLivrosEmprestados() const;
    int calcularMulta(const std::chrono::system_clock::time_point& dataDevolucao);
    void addLivro (std::string& adicionar); // adiciona o livro na lista de livros emprestados
    int getMulta(); //retorna valor da multa a pagar
private:
    bool pendencia_; // atributo booleano que indica se existe pendência ou não
    int multa_; // valor da multa a ser paga
    std::vector<std::string> livrosEmprestados_; // lista com os livros atualmente emprestados para o aluno
                                                //armazena o ID de cada livro
};

#endif // SITUACAO_H