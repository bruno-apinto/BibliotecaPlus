#include "../include/Notificacao.h"
#include <mailio/message.hpp>
#include <mailio/smtp.hpp>
#include "../include/Aluno.h"
#include <iostream>

void Notificacao::notificarPendencia(const std::vector<Aluno>& alunos) {
    for (const Aluno& aluno : alunos) {
        if (aluno.getSituacao().getSituacao()) {
            enviarEmail(aluno.getEmail());
        }
    }
}

void Notificacao::enviarEmail(const Aluno& aluno) {
    mailio::message msg;

    // Configuração do e-mail
    msg.from(mailio::mail_address("naoresponda.biblioteca.plus@gmail.com", "Biblioteca Plus"));
    msg.add_recipient(mailio::mail_address(aluno.getEmail(), aluno.getNome()));
    msg.subject("Devolução de livro - Não responder");
    msg.content("Olá, " + aluno.getNome() + "! Você possui uma pendência com a biblioteca. Para resolvê-la, devolva o livro emprestado e pague a multa. A Biblioteca Plus agradece!");

    try {
        mailio::smtps conn("smtp.gmail.com", 587);
        conn.authenticate("naoresponda.biblioteca.plus@gmail.com", "tppds2023", mailio::smtps::auth_method_t::START_TLS);
        conn.submit(msg);
        std::cout << "E-mail enviado para: " << aluno.getNome() << " <" << aluno.getEmail() << ">" << std::endl;
    } catch (const mailio::smtp_error& e) {
        std::cerr << "Erro ao enviar e-mail para " << aluno.getNome() << ": " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erro desconhecido ao enviar e-mail para " << aluno.getNome() << ": " << e.what() << std::endl;
    }
}