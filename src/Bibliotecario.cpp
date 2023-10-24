
#include "Bibliotecario.h"
#include "Aluno.h"
#include "Livro.h"

Bibliotecario::Bibliotecario(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula)
    : acervo(), cadastros() {
    // Inicialize os atributos da classe Bibliotecario com os valores fornecidos no construtor.
}

void Bibliotecario::adicionarLivro(const Livro& livro) {
    // Implemente a lógica para adicionar um livro ao acervo.
}

void Bibliotecario::removerLivro(const std::string& titulo) {
    // Implemente a lógica para remover um livro do acervo.
}

void Bibliotecario::editarLivro(const std::string& titulo, const std::string& novoTitulo, const std::string& novoAutor, const std::string& novaEditora, const std::string& novosDetalhes) {
    // Implemente a lógica para editar as informações de um livro no acervo.
}

void Bibliotecario::adicionarPessoa(const Alunos& aluno) {
    // Implemente a lógica para adicionar um aluno aos cadastros.
}

void Bibliotecario::removerPessoa(const std::string& matricula) {
    // Implemente a lógica para remover um aluno dos cadastros.
}

void Bibliotecario::editarPessoa(const std::string& matricula, const std::string& novoNome, const std.


void Livro::setSituacao(SituacaoEmprestimo novaSituacao) {
    situacao_ = novaSituacao;
}
