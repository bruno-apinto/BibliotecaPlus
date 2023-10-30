#ifndef NOTIFICACAO_H
#define NOTIFICACAO_H

#include "Aluno.h" 

class Notificacao {
public:
    void notificarAlunosComPendencia(const std::vector<Aluno>& alunos);

private:
    void enviarEmail(const std::string& destinatario);
};

#endif // NOTIFICACAO_H
