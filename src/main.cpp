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
enum categoriaAluno{nome, telefone, login, email, matricula, situacao};

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

void verSituacaoAluno(string* ID){

    Aluno estudante;
    estudante = estudante.procurarAlunos("matricula", *ID);

    cout << "\nSituacao: " << estudante.getSituacao() << endl;
}

void verDadosAluno(string* ID){
    Aluno estudante;
    estudante = estudante.procurarAlunos("matricula", *ID);

    cout << estudante.getNome() << endl << estudante.getLogin() << endl;
    cout << estudante.getEmail() << endl << estudante.getTelefone() << endl;
}

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

        lista = AcervoAlunos::procurarLivros(categoria, item);

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

void loopBuscarAluno(vector<Aluno> &lista, string &categoria, string &item){

    while (){

        cout << "\n\nInsira a categoria:\n(nome, telefone, login, email, matricula, situacao) => ";
        cin >> categoria;

        categoriaAluno checar = 0;
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

        lista = AcervoAlunos::procurarAlunos(categoria, item);

        if (lista.empty()){
            cout << "Nao existe nenhum livro com essa caracteristica\n";
        }
        else {
            for (auto it = lista.begin(); it != lista.end(); it++){
                cout << it->getNome << " ";
                cout << it->getTelefone << " ";
                cout << it->getLogin << " ";
                cout << it->getEmail << " ";
                cout << it->getMatricula << " ";
                cout << it->getSituacao << std::endl;
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

    lista = AcervoLivros::procurarLivros(categoria, item);

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

int buscarAluno(int &input){
    string categoria;
    string item;
    vector<Aluno> lista;

    cout << "\n\nInsira a categoria:\n(nome, telefone, login, email, matricula, situacao) => ";
    cin >> categoria;

    categoriaAluno checar = 0;
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

    lista = AcervoAlunos::procurarAlunos(categoria, item);

    if (lista.empty()){
        cout << "Nao existe nenhum livro com essa caracteristica\n";
    }
    else {
        for (auto it = lista.begin(); it != lista.end(); it++){
            cout << it->getNome << " ";
            cout << it->getTelefone << " ";
            cout << it->getLogin << " ";
            cout << it->getEmail << " ";
            cout << it->getSituacao << " ";
            cout << it->getMatricula << endl;
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
        loopBuscarAluno(lista, categoria, item);
    }

    return 0;
}

void bibliotecarioAluno(int& input){
    cout << "Ações:\n[1] - Procurar Aluno\n[2] - Editar aluno\n[3] - Voltar\n";
        while(){
            cin >> input;
            switch (input) {
                case 1:
                    buscarAluno(input)
                    break;
                case 2:
                    bibliotecarioLivro(input);
                    break;
                case 3:
                    break;
                default:
                    cout << "Entrada errada\n";
                }
            }

}

void bibliotecarioLivro(int& input){

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