#include "Livro.h"

Livro::Livro(std::string titulo, std::string autor, std::string editora, std::string detalhesLivro)
    : titulo(titulo), autor(autor), editora(editora), detalhesLivro(detalhesLivro) {}

std::string Livro::Titulo() const {
    return titulo;
}
std::string Livro::Autor() const {
    return autor;
}
std::string Livro::Editora() const {
    return editora;
}
std::string Livro::DetalhesLivro() const {
    return detalhesLivro;
}