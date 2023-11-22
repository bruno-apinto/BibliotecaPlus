#ifndef BARRICADAS_H
#define BARRICADAS_H

#include <stdexcept>
#include <string>

class Barricadas {
public:
    // Construtor da barricada
    BarricadaNome(const std::string& mensagem);

    // Função para ativar a barricada com um nome específico
    void ativar(const std::string& nome);

     // Construtor da barricada para data
    BarricadaData(const std::string& mensagem);

    // Função para ativar a barricada com uma data específica
    void ativar(const std::string& data);

 // Construtor da barricada para e-mail
    BarricadaEmail(const std::string& mensagem);

    // Função para ativar a barricada com um endereço de e-mail específico
    void ativar(const std::string& email);

private:
    std::string mensagemErro;
};

#endif // BARRICADAS
