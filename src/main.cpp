#include "include/AcervoAlunos.h"
#include "include/AcervoLivros.h"
#include "include/Aluno.h"
#include "include/Livro.h"
#include "include/Notificacao.h"
#include "include/Situacao.h"

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;

void bibliotecarioAluno(){

}

void bibliotecarioLivro(){

}

void bibliotecario(){

}

void aluno(){

}

int validation(string &login, string &senha){
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
                return 0;
            }
        }
    }
}

int entrar(){
    cout << "\nInsira o login:  ";

    string login;
    cin >> login;

    cout << "\nInsira a senha:  ";

    string senha;
    cin << senha;

    int key = validation (login, senha);
    return key;
}


int main (){

    int key = 0;

    while (!key) {
        key = entrar();
    }

     switch (key) {
            case 2:
            bibliotecario();
            break;

            case 2:
            aluno();
            break;

            default:
            cout << "erro em key!\n";
            break;
        }


}