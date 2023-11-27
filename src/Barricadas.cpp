#include "BarricadasEntradas.h"
#include <regex>

void BarricadasEntradas::validarNome(const std::string& nome) {
    validarStringNaoVazia(nome, "Nome inválido");
}

void BarricadasEntradas::validarTelefone(const std::string& telefone) {
    // Adicione aqui lógica de validação para número de telefone, se necessário
    validarStringNaoVazia(telefone, "Telefone inválido");
}

void BarricadasEntradas::validarEmail(const std::string& email) {
    // Utilizando uma expressão regular simples para verificar se o e-mail está em um formato válido
    std::regex padraoEmail(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");

    if (!std::regex_match(email, padraoEmail)) {
        throw std::logic_error("Email inválido: " + email);
    }
}

void BarricadasEntradas::validarMatricula(const std::string& matricula) {
    validarStringNaoVazia(matricula, "Matrícula inválida");
}

void BarricadasEntradas::validarCategoriaLivro(const std::string& categoria) {
    // Adicione aqui lógica de validação para categoria de livro, se necessário
    validarStringNaoVazia(categoria, "Categoria de livro inválida");
}

void BarricadasEntradas::validarCategoriaAluno(const std::string& categoria) {
    // Adicione aqui lógica de validação para categoria de aluno, se necessário
    validarStringNaoVazia(categoria, "Categoria de aluno inválida");
}

void BarricadasEntradas::validarStringNaoVazia(const std::string& valor, const std::string& mensagemErro) {
    if (valor.empty()) {
        throw std::logic_error(mensagemErro);
    }
}