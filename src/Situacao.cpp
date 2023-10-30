#include "include/Situacao.h"
#include <iostream>
#include <vector>
#include <string>
#include <chrono>

Situacao::Situacao() {
    pendencia_ = false; // Inicializa como falso
    multa_ = 0;
}

bool Situacao::getSituacao() {
    return pendencia_;
}

void Situacao::setSituacao(bool pendencia) {
    pendencia_ = pendencia;
}

int Situacao::calcularMulta(const std::chrono::system_clock::time_point& dataDevolucao) {
    // Obtém a data atual
    std::chrono::system_clock::time_point dataAtual = std::chrono::system_clock::now();
    // Calcula a diferença em dias entre a data de devolução e a data atual
    std::chrono::duration<int> diff = std::chrono::duration_cast<std::chrono::hours>(dataAtual - dataDevolucao);
    int diasDeAtraso = diff.count() / 24; // Converte horas em dias

    if (diasDeAtraso > 0) {
        multa_ = diasDeAtraso * 3; // 3 reais por dia de atraso
    } else {
        multa_ = 0;
    }
    return multa_;
}

const std::vector<std::string>& Situacao::getLivrosEmprestados() const {
    return livrosEmprestados_;
}