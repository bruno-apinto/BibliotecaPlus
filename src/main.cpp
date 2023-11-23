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

void editarAcervo(int& input){

    while(input){
        cout << "Acao:\n[1] - Adicionar livro\n[2] - Remover livro\n[3] - Editar livro\n";
        switch(input){
            case 1:
                adicionarLivro_();
                break;
            case 2:
                removerLivro_();
                break;
            case 3:
                editarLivro_();
                break;
            default:
                cout << "Entrada invalida\n";
        }
    }
    
}

void editarAluno(int& input){
    //Opcoes de acao para alterar Alunos.txt

    cout << "\n[1] - Adicionar aluno\n[2] - Remover aluno\n[3] - Editar cadastro\n\n";
    while(){
            cin >> input;
            switch (input) {
                case 1:
                    adicionarAluno_();
                    break;
                case 2:
                    removerAluno_()
                    break;
                case 3:
                    editarCadastro_();
                    break;
                default:
                    cout << "Entrada errada, repita o comando\n";
            }
        }
    
}

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
    //Tela Inicial do menu aluno

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


void bibliotecarioAluno(int& input){
    //Tela inicial da aba Aluno em bibliotecario()
    
    cout << "Ações:\n[1] - Procurar Aluno\n[2] - Editar lista de alunos\n[3] - Voltar\n";
        while(){
            cin >> input;
            switch (input) {
                case 1:
                    buscarAluno(input);
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

char multa(Aluno& aluno){
    //retorna se há multa ou nao a pagar
    k
    cout << endl << aluno.getSituacao() << endl;
    cout << "Multa a pagar R$ " << aluno.getSituacao().getMulta() << endl;
    
    cout << "Multa quitada?[Y/N]\n";
    char entrada;

    if (aluno.getSituacao().getMulta() == 0){
        entrada = 'Y';
        cout << "Y\n";
        return entrada;
    }
    else 
        cin >> entrada;

    return entrada;
}

void emprestar(Livro& book){
    //empresta um livro ao aluno
    //PRE-CONDICAO: livro estar disponivel no acervo

    cout << "Qual a matricula do aluno?\n";
    string entrada;
    cin >> entrada;

    vector<Aluno> lista = AcervoAlunos::procurarAlunos("matricula", entrada);

    char valid = multa(lista[0]);

    string data = "00000"; //alterar data pra biblioteca chrono

    if (valid == 'Y'){
        book.setStatus(true);
        book.setDataEmprestimo(data);
    }
}

void receber(int& input){
    //recebe o livro e quita a divida ou nao do aluno
    cout << "Qual a matricula do aluno?\n";
    string entrada;
    cin >> entrada;

    vector<Aluno> lista = AcervoAlunos::procurarAlunos("matricula", entrada);

    char valid = multa(lista[0]);

    if (valid == 'N'){
        cout << "Dívida nao quitada\n";
    }
    else {
        vector<string> nomes;
        nomes = lista[0].getSituacao().getLivrosEmprestados();
        Livro livro_;
        
        for(auto it = nomes.begin(), int a = 0; it != nomes.end(); it++, a++){
                livro_ = AcervoLivros::procurarLivros("ID", nomes[a]);
                livro_.setStatus();
        }

        lista[0].getSituacao().setSituacao(false);
        cout << "Divida quitada e livro devolvido!\n";
    }
    
}

void emprestimos(int& input){
    cout << "ID ->\n";
    string entrada;
    cin >> entrada;
    
    vector<Livro> lista = AcervoLivros::procurarLivros("ID", entrada);
    cout << "Situacao do livro: " << lista[0].getStatus();

    cout << "O que deseja fazer?\n";
    cout << "[1] - Receber\n[2] - Voltar\n";
    if (lista[0].getStatus().compare("Disponivel")){
        cout << "[3] - Emprestar\n";
    }

    while(input){
        switch(input){
        case 1:
            receber(input);
            break;
        case 3:
            if(lista[0].getStatus().compare("Disponivel")){
                emprestar(lista[0]);
            }
            break;
        case 2:
            input = 0;
            break;
        default:
            cout << "Entrada invalida!\n";
        }
    }
}

void bibliotecarioLivro(int& input){
    //Tela inicial da aba Livro em bibliotecario

    while(input){
        cout << "Acoes:\n[1] - Procurar livro\n[2] - Editar acervo\n";
        cout << "[3] - Emprestimos\n[4] - Voltar";
        
        switch(input){
            case 1:
                buscarLivro();
                break;
            case 2:
                editarAcervo(input);
                break;
            case 3:
                emprestimos(input);
                break;
            case 4:
                input = 0;
                break;
            default:
                cout << "Entrada invalida!\n";
        }
    }

}

void bibliotecario(){
    // Tela inicial do bibliotecario

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
    //Valida login e senha
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
    //Menu de login

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