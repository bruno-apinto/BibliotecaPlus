#include "Aluno.h"
#include "Livro.h"
#include <iostream>
#include <string.h>

Alunos::Alunos(std::string nome, std::string telefone, std::string login,
                 std::string senha, std::string email, std::string matricula)
{
    usuario.nome = nome;
    usuario.telefone = telefone;
    usuario.login = login;
    usuario.senha = senha;
    usuario.email = email;
    usuario.matricula = matricula;

    situacao.pendencia = false;
    situacao.multa = 0;
    // Inicializar outras informações da Situação, como livrosEmprestados e historicoEmprestimos, conforme necessário.
}

void Alunos::ConsultarDados() {
    std::cout << "Nome: " << usuario.nome << std::endl;
    std::cout << "Telefone: " << usuario.telefone << std::endl;
    std::cout << "Login: " << usuario.login << std::endl;
    std::cout << "Email: " << usuario.email << std::endl;
    std::cout << "Matrícula: " << usuario.matricula << std::endl;
}

std::vector<Livro> Alunos::ProcurarLivrosPorTitulo(std::string titulo) {
    std::vector<Livro> livrosEncontrados;
   // for (const Livro& livro : listaDeLivros) {
       // if (livro.Titulo() == titulo) {
           // livrosEncontrados.push_back(livro);
       // }
   // }
   // return livrosEncontrados;
}


   
std::vector<Livro> Alunos::ProcurarLivros
    (std::string parametro, std::string item, std::vector<Livro> livrosEncontrados) {
    
    if (!(parametro.compare("Autor"))){

        std::vector<Livro> auxiliar;
        for (auto it = livrosEncontrados.begin(); it != livrosEncontrados.end(); it++){
            
            if (*it.comparar() == true){
                
            }
        }
    }

    else if (!(parametro.compare("Autor"))){

    }

    else if (!(parametro.compare("Nome"))){

    }

    else if (!(parametro.compare("Editora"))){

    }

    else if (!(parametro.compare("Ano"))){

    }

    else if (!(parametro.compare("Edicao"))){

    }

    else if (!(parametro.compare("Numero"))){

    }

    else if (!(parametro.compare("Secao"))){

    }
}

std::vector<Livro> Alunos::procurarLivrosPorEditora(std::string editora) {
    std::vector<Livro> livrosEncontrados;
    for (const Livro& livro : listaDeLivros) {
        if (livro.Editora() == editora) {
            livrosEncontrados.push_back(livro);
        }
    }
    return livrosEncontrados;
}

void Alunos::ConsultarSituacao() {
    std::cout << "Pendência: " << (situacao.pendencia ? "Sim" : "Não") << std::endl;
    std::cout << "Multa: " << situacao.multa << " reais" << std::endl;
    // Mostrar informações sobre livros emprestados e histórico de empréstimos.
}
