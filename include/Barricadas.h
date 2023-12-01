#ifndef BARRICADAS_ENTRADAS_H
#define BARRICADAS_ENTRADAS_H

#include <stdexcept>
#include <string>

class BarricadasEntradas {
public:
    
    //valida as entradas da main.cpp

    static void validarNome(const std::string& nome);
    static void validarTelefone(const std::string& telefone);
    static void validarEmail(const std::string& email);
    static void validarMatricula(const std::string& matricula);
    static void validarCategoriaLivro(const std::string& categoria);
    static void validarCategoriaAluno(const std::string& categoria);

private:
    static void validarStringNaoVazia(const std::string& valor, const std::string& mensagemErro);
};

#endif // BARRICADAS_ENTRADAS_H