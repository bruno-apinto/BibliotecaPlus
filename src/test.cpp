#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_SUPER_FAST_ASSERTS
#include "../include/doctest.h"
#include "../include/Aluno.h"
#include "../include/Livro.h"
#include "../include/Situacao.h"
// #include "../include/AcervoAlunos.h"
// #include "../include/Notificacao.h"
#include <iostream>
#include <vector>

TEST_CASE("Teste de Alunos") {
    Aluno teste("Mateus", "123123", "Login", "Senha", "samira.mansurc@gmail.com", "Matricula", true);
    Aluno teste2("Mateus2", "123123", "Login", "Senha", "mateussb31@yahoo.com.br", "Matricula", true);
    Aluno teste3("Mateus3", "123123", "Login", "Senha", "cris.samiramansur@gmail.com", "Matricula", false);
    std::vector<Aluno> alunos;
    alunos.push_back(teste);
    alunos.push_back(teste2);
    alunos.push_back(teste3);
    // Verificações para os atributos do Aluno
    CHECK(teste.getNome() == "Mateus");
    CHECK(teste.getTelefone() == "123123");
    CHECK(teste.getLogin() == "Login");
    CHECK(teste.getSenha() == "Senha");
    CHECK(teste.getEmail() == "samira.mansurc@gmail.com");
    CHECK(teste.getMatricula() == "Matricula");
    // CHECK(teste.getSituacao().getSituacao());
    std::cout << teste.getSituacao().getSituacao() << std::endl;

    Livro livroTeste("Nome teste", "Autor teste", "Ano teste","Edição teste", "Editora teste", "ID teste");
    CHECK_EQ(livroTeste.getNome(), "Nome teste");
    CHECK_EQ(livroTeste.getAutor(), "Autor teste");
    CHECK_EQ(livroTeste.getAno(), "Ano teste");
    CHECK_EQ(livroTeste.getEditora(), "Editora teste");
    CHECK_EQ(livroTeste.getEdicao(), "Edição teste");
    CHECK_EQ(livroTeste.getID(), "ID teste");
    // Notificacao not;
    // not.notificarPendencia(alunos);

}
