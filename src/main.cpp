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

key validarSenha (std::string& login, std::string& senha, Pessoa& usuario){
    //conferir se o usuario e as senhas são validos
    key chave;

    //procurar usuario
    //se existir bibliotecario == 1, aluno == 2, ngm == 0

    return chave;
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

            }
            else {
                std::cout << "\nUSUARIO E/OU LOGIN INVALIDOS!\n";
                std::cout << "Refaça o login\n";
                continue;
            }

        }

        else {return 0;}


    }
}