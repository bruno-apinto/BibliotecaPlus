#include "include/AcervoAlunos.h"
#include "include/AcervoLivros.h"
#include "include/Aluno.h"
#include "include/Livro.h"
#include "include/Notificacao.h"
#include "include/Situacao.h"
#include "interface.h"

#include <iostream>
#include <string>
#include <vector>

enum categoriaLivro{nome, autor, ano, edicao, editora, ID};
enum categoriaAluno{nome, telefone, login, email, matricula, situacao};

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

int checagemLivro(string& categoria){
    //checa se a categoria escolhida pertence a uma das categorias de livro
    categoriaLivro checar = 0;
    for (int a = 0; a<6; a++){
        if (a = 6) {
            cout << "erro na categoria\n";
            return 1;
        }
        checar = a;
        if (!categoria.compare(checar)) break;
    }
    return 0;
}

int checagemAluno(string& categoria){
    //checa se a categoria escolhida pertence a uma das categorias de aluno
    categoriaAluno checar = 0;
    for (int a = 0; a<6; a++){
        if (a = 6) {
            cout << "erro na categoria\n";
            return 1;
        }
        checar = a;
        if (!categoria.compare(checar)) break;
    }
    return 0;
}

void aluno(string* IDENTIFICACAO){

    int input = 10;

    while (input){
        cout << "\n[1] - Buscar livro\n[2] - Ver dados\n[3] - Ver situacao\n[4] - SAIR\n\n";
        cin >> input;

        switch(input){
            case 1:
                buscarLivro(input);
                break;
            case 2:
                verDadosAluno(IDENTIFICACAO);
                break;
            case 3:
                verSituacaoAluno(IDENTIFICACAO);
            case 4:
                return 0;
                break;
            default:
                cout << "acao invalida\n";
                break;
        }
    }
}

void bibliotecario(){
    cout << "Aba:\n[1] - Alunos\n[2] - Livros\n[3] - Voltar\n";

    int input;
    while(){
        cin >> input;
        switch (input) {
            case 1:
                bibliotecarioAluno(input);
                input = 0;
                break;
            case 2:
                bibliotecarioLivro(input);
                input = 0;
                break;
            case 3:
                break;
            default:
                cout << "Entrada errada\n";
        }
    }

}

int validation(string &login, string &senha, string* ID){
    //0 - aluno cadastrado
    //1 - erro
    //2 - admin

    if (!login.compare("admin") && !login.compare("admin")){
        return 1;
    }

    else {
        vector<Aluno> lista;
        lista = Aluno::procurarAlunos("login", login);

        if (lista.size() != 1) {
            cout << "Login inválido!\n";
            return 1;
        }

        else {
            lista = Aluno::procurarAlunos("senha", senha, lista);
            if (lista.size() != 1){
                cout << "senha inválida\n";
                return 1;
            }
            else {
                *ID = lista[0].getMatricula();
                return 0;
            }
        }
    }
}

int entrar(string* IDENTIFICACAO){
    cout << "\nInsira o login:  ";

    string login;
    cin >> login;

    cout << "\nInsira a senha:  ";

    string senha;
    cin << senha;

    int key = validation (login, senha, IDENTIFICACAO);
    return key;
}

int main (){

    int key = 0;
    string *IDENTIFICACAO;
    IDENTIFICACAO = new string;

    while (!key) {
        key = entrar(IDENTIFICACAO);
    }

     switch (key) {
            case 2:
            bibliotecario();
            break;

            case 1:
            aluno(IDENTIFICACAO);
            break;

            default:
            cout << "erro em key!\n";
            break;
        }

    delete IDENTIFICACAO;
}