# BibliotecaPlus
Sistema de Biblioteca Avançado: 

Descrição do Projeto/ Apresentação do problema:  

As bibliotecas da universidade precisam de um sistema que controle o estoque de livros, permita consulta de títulos, gerencie multas, atrasos de devolução e envie notificações sobre devoluções atrasadas. É necessário que o sistema seja de fácil implementação, eficiente, tenha interface intuitiva e que incorpore os princípios de programação orientada a objetos. O programa deve atender bibliotecários e alunos, cada um com suas atribuições.

Requisitos de Projeto: 

Sistema para Bibliotecários: 

    O sistema precisa ser capaz de procurar títulos de livro no estoque, editar o acervo, editar cadastros de alunos (adicionar, remover e alterar dados), registrar empréstimos e devoluções. 

Sistema para Alunos: 

    A implementação terá que realizar a busca de títulos no acervo, consultar a situação de empréstimos do usuário (calcular multa e acessar o histórico de livros emprestados) e acessar seus dados. 

Levantamento de requisitos: 

Requisitos funcionais: 

    - O sistema deve atender alunos e bibliotecários, cada um com sua devida finalidade e funcionalidade. 
    - Controle do acervo (consulta, possibilidade de adicionar ou remover livros). 
    - Calcular multas. 
    - Registrar empréstimos e devoluções. 
    - Enviar notificações sobre atrasos de devoluções. 
    - Consultar dados de usuários. 

Requisitos não funcionais: 

    - Interface intuitiva. 
    - Código bem documentado e organizado. 

Modelagem básica do sistema: 
    Terão quatro classes principais: Alunos, Bibliotecário, Livros e Notificação. 

Classe Aluno: 

Atributos: 

    - Situacao situacao: Estrutura que registra a situação do aluno em relação a empréstimos de livros, incluindo se há pendências, o valor da multa a pagar e a lista de títulos de livros atualmente emprestados.

Métodos: 

    - Alunos::Alunos(std::string nome, std::string telefone, std::string login, std::string senha, std::string email, std::string matricula): Construtor da classe que permite criar um objeto aluno com informações iniciais, como nome, telefone, login, senha, email e matrícula. Além disso, inicializa a situação sem pendências, com multa igual a zero e sem livros emprestados.
    - void Alunos::consultarDados(): Método que permite ao aluno consultar e exibir seus dados pessoais, incluindo nome, telefone, login, email e matrícula.
    - void Alunos::consultarSituacao(): Método que consulta a situação atual do aluno em relação aos empréstimos de livros, verificando se há pendências, o valor da multa e a lista de livros emprestados
    - std::vector<Livro> Alunos::procurarLivros(std::string parametro, std::string item, std::vector<Livro> livrosEncontrados): Método que permite ao aluno procurar livros no acervo da biblioteca com base em parâmetros como autor, título, editora, etc.
    - calcularMulta(dataDevolucao, dataAtual): Método que recebe as datas de devolução e data atual como entrada e calcula a multa com base na diferença entre essas datas. Esse método é fundamental para calcular multas devidas pelo aluno em caso de atraso na devolução. 

Estrutura Situacao:

A estrutura Situacao é uma estrutura interna que contém informações sobre a situação do aluno em relação aos empréstimos de livros:
    - bool pendencia: Um atributo booleano que indica se o aluno possui alguma pendência, como atrasos na devolução de livros.
    - float multa: Um atributo que armazena o valor da multa que o aluno deve pagar, caso haja atrasos na devolução.-std::vector<std::string> livrosEmprestados: Uma lista de strings que contém os títulos dos livros atualmente emprestados para o aluno.

Classe Bibliotecário: 

Atributos: 

    - cadastros: Uma lista de objetos do tipo Alunos que representa os registros de alunos. O bibliotecário pode adicionar, remover e editar cadastros de alunos.

Métodos: 

    - procurarLivros(parametro, item, livrosEncontrados): Permite ao bibliotecário procurar livros no acervo com base em um parâmetro (título, autor, editora, detalhes) e um item de pesquisa. A função retorna uma lista de livros encontrados.
    - adicionarLivro(livro): Permite ao bibliotecário adicionar um livro ao acervo da biblioteca.
    - removerLivro(titulo): Permite ao bibliotecário remover um livro do acervo com base no título do livro.
    - editarLivro(titulo, novoTitulo, novoAutor, novaEditora, novosDetalhes): Permite ao bibliotecário editar as informações de um livro no acervo com base no título. O bibliotecário pode atualizar o título, autor, editora e detalhes do livro.
    - adicionarPessoa(aluno): Permite ao bibliotecário adicionar um novo cadastro de aluno ao sistema.
    - removerPessoa(matricula): Permite ao bibliotecário remover o cadastro de um aluno com base em sua matrícula.
    - editarPessoa(matricula, novoNome, novaSenha, novoEmail): Permite ao bibliotecário editar as informações de um cadastro de aluno com base em sua matrícula. O bibliotecário pode atualizar o nome, senha e email do aluno.
    - emprestarLivro(aluno, livro): Permite ao bibliotecário registrar o empréstimo de um livro a um aluno. Isso atualiza a situação do livro para "emprestado".
    - receberLivro(aluno, livro): Permite ao bibliotecário registrar a devolução de um livro por um aluno. Isso atualiza a situação do livro para "recebido".
    - setSituacao(novaSituacao): Define a situação do empréstimo de um livro. Isso pode ser usado para atualizar a situação de um livro para "disponível", "atrasado" ou "perdido".

Classe Livros:

Atributos:

    - nome_ (std::string): Armazena o nome do livro.
    - autor_ (std::string): Armazena o nome do autor do livro.
    - ano_ (std::int): Armazena o ano de publicação do livro.
    - edicao_ (std::int): Armazena a edição do livro.
    - biblioteca_ (std::string): Armazena informações sobre a biblioteca.
    - editora_ (std::string): Armazena o nome da editora do livro.
    - ID_ (std::int): Armazena um número de identificação único para o livro.
    - dataEmprestimo_ (int): Armazena a data em que o livro foi emprestado, se aplicável.
    - situacao_ (SituacaoEmprestimo): Um enum que indica a situação do empréstimo do livro, que pode ser "Disponível," "Emprestado," "Atrasado" ou "Perdido."
    - dataDevolucao: Atributo que armazena a data prevista para devolução dos livros emprestados.

Métodos:

    - Livro::Livro: Construtor da classe Livro. Ele inicializa todos os atributos do livro com os valores fornecidos.
    - getNome() const: Método que retorna o nome do livro.
    - getAutor() const: Método que retorna o nome do autor do livro.
    - getAno() const: Método que retorna o ano de publicação do livro.
    - getEdicao() const: Método que retorna a edição do livro.
    - getBiblioteca() const: Método que retorna informações sobre a biblioteca relacionadas ao livro.
    - getEditora() const: Método que retorna o nome da editora do livro.
    - getSituacao() const: Método que retorna a situação do empréstimo do livro (Disponível, Emprestado, Atrasado ou Perdido).
    - getID() const: Método que retorna o número de identificação único do livro. 
    - comparar(Livro& livro): Método que compara dois livros para verificar se são iguais com base em vários atributos, como nome, autor, ano, edição, etc. Retorna true se forem iguais e false se forem diferentes.
    - procurarLivros(std::string parametro, std::string item, std::vector<Livro> livrosEncontrados): Método que permite a busca de livros com base em um parâmetro específico, como "Autor," "Nome," "Editora," etc. Ele retorna uma lista de livros que correspondem ao critério de busca.

Classe Notificação:

Atributos:

    - smtpServer (string): O endereço do servidor SMTP a ser usado para enviar notificações por email.
    - smtpPort (int): A porta do servidor SMTP a ser usada para enviar notificações por email.
    - smtpUsername (string): O nome de usuário usado para autenticar no servidor SMTP.
    - smtpPassword (string): A senha usada para autenticar no servidor SMTP.

Métodos:

    - enviarNotificacao(aluno: Alunos, assunto: string, corpo: string): bool: Este método recebe um objeto Alunos, um assunto e o corpo da notificação como entrada. Ele verifica se o aluno tem pendências e, se tiver, envia uma notificação para o email do aluno com o assunto e corpo especificados. Retorna true se a notificação for enviada com sucesso, ou false se houver algum erro no envio.
    - setConfiguracoesSMTP(servidor: string, porta: int, username: string, senha: string): Este método permite definir as configurações do servidor SMTP para uso na classe. Ele recebe o endereço do servidor, a porta, o nome de usuário e a senha para autenticação no servidor SMTP.
    - escolherDestinatarioComPendencia(alunos: vector<Alunos>): vector<Alunos>: Este método recebe uma lista de objetos Alunos como entrada e retorna uma lista contendo apenas os alunos que têm pendências na biblioteca. Isso é útil para selecionar os destinatários corretos antes de enviar notificações.
    - enviarNotificacoesPendentes(alunosComPendencia: vector<Alunos>, assunto: string, corpo: string): vector<string>: Este método recebe uma lista de alunos com pendências, um assunto e um corpo como entrada, e envia notificações para todos eles. Ele retorna uma lista de endereços de email para os quais as notificações foram enviadas com sucesso.

Instruções de instalação:

    - Certifique-se de ter um compilador C++ instalado no seu sistema. 
    - Clone o repositório do projeto para o seu terminal:
    git clone https://github.com/seu-usuario/biblioteca-plus.git
    - Vá até o diretório raiz do projeto:
    cd biblioteca-plus
    - Compile o código-fonte usando o compilador g++:
    g++ -o biblioteca-plus src/*.cpp
    - Pode executá-lo usando:
    ./bin/biblioteca-plus

Instruções de uso:

    - Executar o programa e realizar o login.
    - Selecionar o método que gostaria de acessar.
    - Seguir as instruções que forem dadas durante o uso.

Estrutura do projeto:
- src: Este diretório contém o código-fonte do sistema. Aqui você encontrará os arquivos das classes Alunos, Bibliotecario, Livro, Notificacao, e outros componentes relacionados ao funcionamento do sistema.

- include: Neste diretório, estão localizados os arquivos de cabeçalho (headers) que declaram as classes e métodos utilizados no código-fonte. É onde você encontrará os arquivos .h que descrevem as interfaces das classes.

- doc: A pasta "doc" contém a documentação do projeto. Aqui, você encontrará informações detalhadas sobre a estrutura do código, a descrição das classes, métodos e atributos, bem como informações sobre como usar o sistema.

- test: Este diretório contém os testes unitários e de integração do sistema. Os testes são usados para verificar se o código está funcionando conforme o esperado e se não há regressões ao fazer alterações no código.

- bin: É o diretório onde os arquivos executáveis são gerados após a compilação do código-fonte. Aqui, você encontrará o executável principal do sistema, que pode ser usado para iniciar a aplicação.

- data: O diretório "data" armazena dados de exemplo, como informações de livros, informações de alunos e outros dados que podem ser usados para testar o sistema.

Principais dificuldades:
- Integração das classes: Garantir que as classes Alunos, Bibliotecario, Livro e Notificacao se integrassem de maneira eficaz, com troca de informações e funcionalidades entre elas.

- Cálculo de multas e gestão de datas: Implementar um sistema eficiente de cálculo de multas com base em datas e lidar com a gestão de datas para empréstimos e devoluções de livros.

- Envio de notificações por email: Configurar e integrar a funcionalidade de envio de notificações por email, garantindo que as notificações fossem enviadas aos alunos com pendências de forma correta.

-Testes e validação: Desenvolver testes adequados e garantir que o sistema funcionasse conforme o esperado, incluindo a verificação de casos de uso, tratamento de erros e validação de entradas.