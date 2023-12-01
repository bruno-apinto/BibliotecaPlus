#ifndef NOTIFICACAO_H
#define NOTIFICACAO_H

class Notificacao {
public:

    /**
     * @brief Procura quem está pendente
     * 
     * @param alunos 
     */
    void notificarPendencia( std::vector<Aluno> alunos);

private:

    /**
     * @brief Envia o email para os alunos com livro atrasado
     * 
     * @param destinatario 
     */
    void enviarEmail(const std::string& destinatario);
};

#endif // NOTIFICACAO_H
