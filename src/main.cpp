#include <iostream>
#include <string>

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

bool validarSenha (std::string& login, std::string& senha){
    //conferir se o usuario e as senhas são validos

    return true;
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
            Pessoa::Pessoa usuario;
            input = validarSenha (login, senha, usuario);

            if (input) {

            }
            else {continue;}

        }

        else {return 0;}


    }
}