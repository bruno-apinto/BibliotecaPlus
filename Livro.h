#ifndef LIVRO_H
#define LIVRO_H

#include <string>

class Livro {
public:
    Livro(std::string titulo, std::string autor, std::string editora, std::string detalhesLivro);

    std::string Titulo() const;
    std::string Autor() const;
    std::string Editora() const;
    std::string DetalhesLivro() const;

private:
    std::string titulo;
    std::string autor;
    std::string editora;
    std::string detalhesLivro;
};

#endif