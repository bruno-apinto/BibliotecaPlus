#include <mailio/message.hpp> 
#include <mailio/smtp.hpp> 

int main() { 

    mailio::message msg; 

    msg.from(mailio::mail_address("naoresponda.biblioteca.plus@gmail.com", "Biblioteca Plus")); 

    msg.add_recipient(mailio::mail_address("destinatario@gmail.com", "Nome do Destinatário")); 

    msg.subject("Devolução de livro - Não responder"); 

    msg.content("Olá! Você possui uma pendência com a biblioteca. Para resolvê-la, devolva o livro emprestado e pague a multa. A Biblioteca Plus agradece!"); 

  

    mailio::smtps conn("smtp.gmail.com", 587); // Use o servidor SMTP do Gmail e a porta 587 

    conn.authenticate("seuemail@gmail.com", "suaSenha", mailio::smtps::auth_method_t::START_TLS); // Autenticação com STARTTLS 

  

    conn.submit(msg); 

  

    return 0; 

} 
