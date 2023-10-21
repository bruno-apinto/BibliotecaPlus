
#include "Bibliotecario.h"
#include "Aluno.h"
#include "Livro.h"

Bibliotecario::Bibliotecario(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula)
    : acervo(), cadastros() {
    // Inicialize os atributos da classe Bibliotecario com os valores fornecidos no construtor.
}

std::vector<Livro> Bibliotecario::ProcurarLivrosPorTitulo(Alunos& aluno, std::string titulo) {
    return aluno.ProcurarLivrosPorTitulo(titulo);
}
std::vector<Livro> Bibliotecario::ProcurarLivrosPorAutor(Alunos& aluno, std::string autor) {
    return aluno.ProcurarLivrosPorAutor(autor);
}
std::vector<Livro> Bibliotecario::ProcurarLivrosPorEditora(Alunos& aluno, std::string editora) {
    return aluno.ProcurarLivrosPorEditora(editora);
}

void Bibliotecario::EditarAcervoAdicionarLivro(const Livro& livro) {
    // Implemente a lógica para adicionar um livro ao acervo.
}

void Bibliotecario::EditarAcervoRemoverLivro(const std::string& titulo) {
    // Implemente a lógica para remover um livro do acervo.
}

void Bibliotecario::EditarAcervoEditarLivro(const std::string& titulo, const std::string& novoTitulo, const std::string& novoAutor, const std::string& novaEditora, const std::string& novosDetalhes) {
    // Implemente a lógica para editar as informações de um livro no acervo.
}

void Bibliotecario::EditarCadastrosAdicionarPessoa(const Alunos& aluno) {
    // Implemente a lógica para adicionar um aluno aos cadastros.
}

void Bibliotecario::EditarCadastrosRemoverPessoa(const std::string& matricula) {
    // Implemente a lógica para remover um aluno dos cadastros.
}

void Bibliotecario::EditarCadastrosEditarPessoa(const std::string& matricula, const std::string& novoNome, const std.
