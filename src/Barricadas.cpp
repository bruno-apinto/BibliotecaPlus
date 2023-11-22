#include "Barricadas.h"
#include <regex>

// Implementação do construtor da barricada para nome
Barricadas::Barricadas(const std::string& mensagem) : mensagemErro(mensagem) {}

// Implementação da função para ativar a barricada com um nome específico
void Barricadas::ativar(const std::string& nome) {
    // Implemente a lógica para verificar se o nome é válido
    // Aqui, estamos usando uma verificação simples para fins de exemplo.
    if (nome.empty() || !std::isalpha(nome[0])) {
        throw std::logic_error(mensagemErro + ": " + nome);
    }
}

// Implementação do construtor da barricada para data
Barricadas::Barricadas(const std::string& mensagem) : mensagemErro(mensagem) {}

// Implementação da função para ativar a barricada com uma data específica
void Barricadas::ativar(const std::string& data) {
    // Implemente a lógica para verificar se a data é válida
    // Aqui, estamos usando uma verificação simples para fins de exemplo.
    if (data.size() != 10 || data[2] != '/' || data[5] != '/' ||
        !isdigit(data[0]) || !isdigit(data[1]) || !isdigit(data[3]) || !isdigit(data[4]) ||
        !isdigit(data[6]) || !isdigit(data[7]) || !isdigit(data[8]) || !isdigit(data[9])) {
        throw std::logic_error(mensagemErro + ": " + data);
    }
}

// Implementação do construtor da barricada para e-mail
Barricadas::Barricadas(const std::string& mensagem) : mensagemErro(mensagem) {}

// Implementação da função para ativar a barricada com um endereço de e-mail específico
void Barricadas::ativar(const std::string& email) {
    // Utilizando uma expressão regular simples para verificar se o e-mail está em um formato válido
    std::regex padraoEmail(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");

    if (!std::regex_match(email, padraoEmail)) {
        throw std::logic_error(mensagemErro + ": " + email);
    }
}
