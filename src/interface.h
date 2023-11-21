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

        if(checagemLivro(categoria)){

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
}

void loopBuscarAluno(vector<Aluno> &lista, string &categoria, string &item){

    while (){

        cout << "\n\nInsira a categoria:\n(nome, telefone, login, email, matricula, situacao) => ";
        cin >> categoria;

        if(!checagem(categoria)){
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
}

int buscarLivro(int &input){
    string categoria;
    string item;
    vector<Livro> lista;

    cout << "\n\nInsira a categoria:\n(nome, autor, ano, edicao, editora, ID) => ";
    cin >> categoria;

    if(!checagemLivro(categoria)){

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

    }

    return 0;
}

vector<Aluno> buscarAluno(int &input){
    string categoria;
    string item;
    vector<Aluno> lista;

    cout << "\n\nInsira a categoria:\n(nome, telefone, login, email, matricula, situacao) => ";
    cin >> categoria;

    if (!checagemAluno(categoria)){
        
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
    }

    return lista;
}

void adicionarAluno_(){
    cout << "Complete as lacunas:\n";
    string entrada[6];

    cout << "Nome -> ";
    cin >> entrada[0];
    cout << "\nTelefone -> ";
    cin >> entrada[1];
    cout << "\nLogin -> ";
    cin >> entrada[2];
    cout << "\nSenha -> ";
    cin >> entrada[3];
    cout << "\nEmail -> ";
    cin >> entrada[4];
    cout << "Matricula -> ";
    cin >> entrada[5];
    Situacao entradaS;
    
    Aluno estudante(entrada[0], entrada[1], entrada[2], entrada[3],
            entrada[4], entrada[5], entradaS);
    AcervoAlunos::adicionarAluno(estudante);

    cout << "Aluno adicionadao!\n";
}

void removerAluno_(){
    
    while(){
    cout << "Matricula do aluno:\n";
    string entrada;
    cin >> entrada;
    
    vector<Aluno> lista = AcervoAlunos::procurarAlunos("Matricula", entrada);

    cout << "Deseja deletar " << lista[0].getNome() << "?\n[Y/N]\n";
    cin >> entrada;

    if (entrada.compare("Y")) 
        AcervoAlunos::removerAluno(lista[0]);
    else
        cout << "Operacao cancelada!\n";
    
    }

}

void editarCadastro_(){
    
    cout << "Matricula do aluno:\n";
    string entrada;
    cin >> entrada;
    
    vector<Aluno> lista = AcervoAlunos::procurarAlunos("Matricula", entrada);

    cout << "Categoria que deseja alterar -> ";
    cin >> entrada;
    cout << "\nNovo parametro ->";
    string novo;
    cin >> novo;

    AcervoAlunos::editarAluno(entrada, novo, lista[0]);
    cout << "\nCadastro alterado!\n";
    
}

void editarAluno(int& input){
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

void editarLivro_(){
    
    cout << "ID do livro:\n";
    string entrada;
    cin >> entrada;
    
    vector<Livro> lista = AcervoLivros::procurarLivros("ID", entrada);

    cout << "Categoria que deseja alterar -> ";
    cin >> entrada;
    cout << "\nNovo parametro ->";
    string novo;
    cin >> novo;

    AcervoLivros::editarLivro(entrada, novo, lista[0]);
    cout << "\nLivro alterado!\n";
    
}

void removerLivro_(){
    
    while(){
        cout << "ID do livro:\n";
        string entrada;
        cin >> entrada;
        
        vector<Livro> lista = AcervoLivros::procurarLivros("ID", entrada);

        cout << "Categoria que deseja alterar -> ";
        cin >> entrada;
        cout << "\nNovo parametro ->";
        string novo;
        cin >> novo;

        cout << "Deseja deletar " << lista[0].getNome() << "?[Y/N]\n";
        string resposta;
        cin >> resposta;


        if (resposta.compare("Y")){
            AcervoLivros::editarLivro(entrada, novo, lista[0]);
            cout << "\nLivro alterado!\n";
            break;
        }
        else {
            cout << "Operacao cancelada!\n";
        }
    }
    
}

void adicionarLivro_(){

    cout << "Características do livro:\n";

    string entrada[6];

    cout << "Nome -> ";
    cin >> entrada[0];
    cout << "\nAutor -> ";
    cin >> entrada[1];
    cout << "\nAno -> ";
    cin >> entrada[2];
    cout << "\nEdicao -> ";
    cin >> entrada[3];
    cout << "\nEditora -> ";
    cin >> entrada[4];
    cout << "ID -> ";
    cin >> entrada[5];

    Livro book(entrada[0], entrada[1], entrada[2], entrada[3],
            entrada[4], entrada[5], "Regular");
    AcervoLivros::adicionarLivro(book);

    cout << "Livro adicionadao!\n";
}

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

void bibliotecarioAluno(int& input){
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

void bibliotecarioLivro(int& input){

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
