#include "include/AcervoAlunos.h"
#include "include/AcervoLivros.h"
#include "include/Aluno.h"
#include "include/Livro.h"
#include "include/Notificacao.h"
#include "include/Situacao.h"

#include <iostream>
#include <string>
#include <vector>

enum categoriaLivro{nome, autor, ano, edicao, editora, ID};

using std::cout;
using std::cin;
using std::string;
using std::vector;


void loopBuscarLivro(vector<Livro> &lista, string &categoria, string &item){

    while (){

        cout << "\n\nInsira a categoria:\n(nome, autor, ano, edicao, editora, ID) => ";
        cin >> categoria;

        categoriaLivro checar = 0;
        for (int a = 0; a<6; a++){
            if (a = 6) {
                cout << "erro na categoria\n";
                return 1;
            }
            checar = a;
            if (!categoria.compare(checar)) break;
        }

        cout << "Insira o termo que deseja pesquisar: \n";
        cin >> item;

        lista = Livro::procurarLivros(categoria, item);

        if (lista.empty()){
            cout << "Nao existe nenhum livro com essa caracteristica\n";
        }
        else {
            for (auto it = lista.begin(); it != lista.end(); it++){
                cout << it->getNome << " ";
                cout << it->getAutor << " ";
                cout << it->getEdicao << " ";
                cout << it->getEditora << " ";
                cout << it->getAno << " ";
                cout << it->getID << std::endl;
            }
        }

        cout << "\n[1] - Refinar\n[2] - Finalizar\n";
        cin >> input;

        if (input != 1 && input != 2) {
            cout << "entrada invalida\n"
        }
        else if (input == 2){
            break;
        }

    }
}

int buscarLivro(int &input){
    string categoria;
    string item;
    vector<Livro> lista;

    cout << "\n\nInsira a categoria:\n(nome, autor, ano, edicao, editora, ID) => ";
    cin >> categoria;

    categoriaLivro checar = 0;
    for (int a = 0; a<6; a++){
        if (a = 6) {
            cout << "erro na categoria\n";
            return 1;
        }
        checar = a;
        if (!categoria.compare(checar)) break;
    }

    cout << "Insira o termo que deseja pesquisar: \n";
    cin >> item;

    lista = Livro::procurarLivros(categoria, item);

    if (lista.empty()){
        cout << "Nao existe nenhum livro com essa caracteristica\n";
    }
    else {
        for (auto it = lista.begin(); it != lista.end(); it++){
            cout << it->getNome << " ";
            cout << it->getAutor << " ";
            cout << it->getEdicao << " ";
            cout << it->getEditora << " ";
            cout << it->getAno << " ";
            cout << it->getID << std::endl;
        }
    }

    cout << "\n[1] - Refinar\n[2] - Finalizar\n";
    cin >> input;

    if (input != 1 && input != 2) {
        cout << "entrada invalida\n"
    }
    else if (input == 2){
        return 0;
    }
    else{
        loopBuscarLivro(lista, categoria, item);
    }

    return 0;
}

void bibliotecarioAluno(){

}

void bibliotecarioLivro(){

}

void bibliotecario(){

}

void aluno(){

    cout << "\n[1] - Buscar\n[2] - Ver dados\n[3] - Ver situacao\n[4] - Voltar\n\n";
    int input = 0;
    cin >> input;

    switch(input){
        case 1:
            buscarLivro(input);
            break;
        case 2:
        case 3:
        case 4:
        default:

    }

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