#include <iostream>
#include <string>
#include <Aluno.h>

typedef struct key {
    Pessoa alguem;
    int permissao;
}key;


void inserirLogin(std::string& login){

    std::cout << "Insira seu login:\n";
            
        std::string login;
        std::cin >> login;
    
    std::cout << "\nDeseja trocar login?\n[Y/N]";
        char answer;
        std::cin >> answer;

        if (answer == 'Y' || answer == 'y') {
            inserirLogin(login);
        }
}

void inserirSenha (std::string& senha){

    std::cout << "Insira sua senha:\n";
    std::cin >> senha;
    
}

    /**
     * @brief 
     * 
     * @param login 
     * @param senha 
     * @param usuario 
     * @return key  1 = Bibliotecario, 2 = Aluno, 0 = Ninguem
     */
key validarSenha (std::string& login, std::string& senha, Pessoa& usuario){
    //conferir se o usuario e as senhas são validos

    /**
     * @brief  1 = Bibliotecario, 2 = Aluno, 0 = Ninguem
     * 
     */
    key chave;

    //procurar usuario
    //se existir bibliotecario == 1, aluno == 2, ngm == 0

    return chave;
}

void acessoAluno (Alunos& aluno, int& input){
    input = 1;
    while(input) {
        std::cout << "\nOpcoes:\n";
        std::cout << "\n[1] - Consultar dados de cadastro\n[2] - Consultar situacao\n";
        std::cout << "[3] - Voltar\n";
        std::cin >> input;

        if (input == 1) {
            aluno.consultarDados();
            input = 1;
        }
        else if (input == 2){
            aluno.consultarSituacao();
            input = 1;
        }
        else {
            input = -1;
            break;
        }
    }
=======
bool validarSenha (std::string& login, std::string& senha){
=======
key validarSenha (std::string& login, std::string& senha, Pessoa& usuario){
>>>>>>> 3f71ac4 (Primeira versão do main.cpp)
    //conferir se o usuario e as senhas são validos
    key chave;

<<<<<<< HEAD
    return true;
>>>>>>> d72811a (Main p.1 e Mudar pessoas de boiblioteca)
=======
    //procurar usuario
    //se existir bibliotecario == 1, aluno == 2, ngm == 0

    return chave;
>>>>>>> 3f71ac4 (Primeira versão do main.cpp)
}

int main(){

    int k = 1;
    while(k){

        int input = 0;

        std::cout << std::endl << "Bem-vindo!\n";
        std::cout << "[1] - Login\n[2] - Sair\n";

        std::cin >> input;

        if (input == 1){

            std::string login;
            inserirLogin(login);

            std::cout << "\n[1] - Inserir senha\n[2] - Sair\n";
            input = 0;
            std::cin >> input;

            if (input == 2) {
                return 0;
            }

            std::string senha;
            inserirSenha(senha);

            //Conferir senha
            Pessoa usuario;
            key chave_;
            chave_ = validarSenha (login, senha, usuario);

            if (chave_.permissao == 1) {
                
            }

            else if (chave_.permissao == 2){
                input = 0;
                
                acessoAluno(estudante, input);
            }
            else {
                std::cout << "\nUSUARIO E/OU LOGIN INVALIDOS!\n";
                std::cout << "Refaça o login\n";
                continue;
            }
=======
            Pessoa::Pessoa usuario;
            input = validarSenha (login, senha, usuario);
=======
            Pessoa usuario;
            key chave_;
            chave_ = validarSenha (login, senha, usuario);
>>>>>>> 3f71ac4 (Primeira versão do main.cpp)

            if (chave_.permissao == 1) {
                
            }

            else if (chave_.permissao == 2){

            }
<<<<<<< HEAD
            else {continue;}
>>>>>>> d72811a (Main p.1 e Mudar pessoas de boiblioteca)
=======
            else {
                std::cout << "\nUSUARIO E/OU LOGIN INVALIDOS!\n";
                std::cout << "Refaça o login\n";
                continue;
            }
>>>>>>> 3f71ac4 (Primeira versão do main.cpp)

        }

        else {return 0;}


    }
}