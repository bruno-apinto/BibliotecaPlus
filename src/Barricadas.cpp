#include "BarricadasEntradas.h"
#include <regex>
#include <cctype>
#include <iostream>

void BarricadasEntradas::validarNome(const std::string& nome) {
    // verificar se a string não está vazia
    validarStringNaoVazia(nome, "Nome inválido");
}

void BarricadasEntradas::validarTelefone(const std::string& telefone) {
    validarStringNaoVazia(telefone, "Telefone inválido");
    if (!ehTelefoneValido(telefone)) {
            std::cerr << "Telefone inválido" << std::endl;
}

void BarricadasEntradas::validarEmail(const std::string& email) {
    // verificar se o e-mail está em um formato válido
    std::regex padraoEmail(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");

    if (!std::regex_match(email, padraoEmail)) {
        throw std::logic_error("Email inválido: " + email);
    }
}

void BarricadasEntradas::validarMatricula(const std::string& matricula) {
    // verificar se a string não está vazia
    validarStringNaoVazia(matricula, "Matrícula inválida");
}

void BarricadasEntradas::validarCategoriaLivro(const std::string& categoria) {
    // verifica se a categoria é válida
   if (categoria < nome || categoria > ID) {
        throw std::out_of_range("Categoria de livro inválida");
    }
}

void BarricadasEntradas::validarCategoriaAluno(const std::string& categoria) {
    // verifica se a categoria é válida
    if (categoria < nome || categoria > situacao) {
        throw std::out_of_range("Categoria de aluno inválida");
    }
}

void BarricadasEntradas::validarStringNaoVazia(const std::string& valor, const std::string& mensagemErro) {
    // verificar se a string não está vazia
    if (valor.empty()) {
        throw std::logic_error(mensagemErro);
    }
}

bool ehTelefoneValido(const std::string& telefone) {
        // Verifica se a string contém apenas dígitos
        return std::all_of(telefone.begin(), telefone.end(), ::isdigit);
    }