
#include "Acervo.h"
#include "Aluno.h"
#include "Livro.h"

AcervoLivros::Acervo(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula)
    : acervo(), cadastros() {
    // Inicialize os atributos da classe Acervo com os valores fornecidos no construtor.
}

void Acervo::adicionarLivro(const Livro& livro) {
    // Implemente a lógica para adicionar um livro ao acervo.
}

void Acervo::removerLivro(const std::string& titulo) {
    // Implemente a lógica para remover um livro do acervo.
}

void Acervo::editarLivro(const std::string& titulo, const std::string& novoTitulo, const std::string& novoAutor, const std::string& novaEditora, const std::string& novosDetalhes) {
    // Implemente a lógica para editar as informações de um livro no acervo.
}




void Livro::setStatus(Status novaStatus) {
    status_ = novoStatus;
}
