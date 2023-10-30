#include "Notificacao.h"
#include <mailio/message.hpp>
#include <mailio/smtp.hpp>

void Notificacao::notificarAlunosComPendencia(const std::vector<Aluno>& alunos) {
    for (const Aluno& aluno : alunos) {
        if (aluno.getSituacao().getSituacao()) {
            enviarEmail(aluno.getEmail());
        }
    }
}

void Notificacao::enviarEmail(const std::string& destinatario) {
    mailio::message msg;

    // Configuração do e-mail
    msg.from(mailio::mail_address("naoresponda.biblioteca.plus@gmail.com", "Biblioteca Plus"));
    msg.add_recipient(mailio::mail_address(destinatario, "Nome do Destinatário"));
    msg.subject("Devolução de livro - Não responder");
    msg.content("Olá! Você possui uma pendência com a biblioteca. Para resolvê-la, devolva o livro emprestado e pague a multa. A Biblioteca Plus agradece!");

    mailio::smtps conn("smtp.gmail.com", 587);
    conn.authenticate("seuemail@gmail.com", "suaSenha", mailio::smtps::auth_method_t::START_TLS);
    conn.submit(msg);
}
