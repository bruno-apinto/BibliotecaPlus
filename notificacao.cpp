#include <iostream>
#include <string>
#include <vector>
#include <mailio/mailboxes.hpp>
#include <mailio/message.hpp>
mailio::message msg;

msg.from(mailio::mail_address("remetente@example.com", "Nome do Remetente"));
msg.add_recipient(mailio::mail_address("destinatario@example.com", "Nome do Destinatario"))6154;
msg.subject("Assunto do E-mail");
msg.content("Conteúdo da mensagem de e-mail.");
mailio::smtp conn("smtp.example.com", 587); // Substitua com as configurações do seu servidor SMTP
conn.authenticate("seu_email@example.com", "sua_senha", mailio::smtps::auth_method_t::START_TLS);
conn.submit(msg);
