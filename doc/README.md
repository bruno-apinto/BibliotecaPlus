# BibliotecaPlus
Sistema de Biblioteca Avançado: 

Descrição do Projeto/ Apresentação do problema:  

As bibliotecas da universidade precisam de um sistema que controle o estoque de livros, permita consulta de títulos, gerencie multas, atrasos de devolução e envie notificações sobre devoluções atrasadas. É necessário que o sistema seja de fácil implementação, eficiente, com interface intuitiva e incorpora com os princípios de programação orientada a objetos. O programa deve atender a bibliotecários e alunos, cada um com suas atribuições.

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
    Terão seis classes principais: Aluno, AcervoLivros, AcervoAlunos, Situacao, Livro e Notificacao. 

Classe Aluno: 

Atributos: 

    - string nome_: nome do aluno.
    - string telefone_: número de contato do aluno.
    - string login_: apelido do cadastro do aluno.
    - string senha_: código de acesso individual.
    - string email_: email do aluno. 
    - string matricula_: número de matriculado.
    - Situacao situacao_: estado de relação do aluno com a biblioteca

Métodos:

    - string getSenha_: retorna a senha do aluno.
    - string getMatricula_: Retorna a matricula.
    - string getEmail_: Retorna o email.
    - string getLogin_: Retorna o login.
    - string getTelefone_: Retorna o telefone.
    - string getNome_: Retorna o nome.
    - vector<Aluno> procurarAlunos: retorna uma lista de alunos procurados.
    - Alunos::Alunos: Construtor da classe que permite criar um objeto aluno com informações iniciais, como nome, telefone, login, senha, email e matrícula.
    - void consultarMeusDados: Método que permite ao aluno consultar e exibir seus dados pessoais, incluindo nome, telefone, login, email e matrícula.
    - Situacao situacao_: retorna se existe alguma pendênciam em nome do aluno, caso haja, informa o valor da multa.

Classe AcervoLivros: 

Métodos: 

    - vector<Livro> procurarLivros: busca de livros no acervo com base em um parâmetro (título, autor, editora, detalhes) e um item de pesquisa. A função retorna uma lista de livros encontrados.
    - void adicionarLivro: Permite adicionar um livro ao acervo da biblioteca.
    - void removerLivro: Permite remover um livro do acervo com base no título do livro.
    - void editarLivro: Permite  editar as informações de um livro no acervo com base no título. Atualiza o título, autor, editora e detalhes do livro.
    - void emprestarLivro: Permite registrar o empréstimo de um livro a um aluno. Isso atualiza a situação do livro para "emprestado".
    - void receberLivro: Permite registrar a devolução de um livro por um aluno. Isso atualiza a situação do livro para "recebido".

Classe AcervoAlunos:

    Métodos:

    - void editarAluno: Edita o cadastro de um aluno, removendo o cadastro antigo e apendicionando um novo a alunos.txt.
    - void removerAluno: Remove um Aluno de alunos.txt.
    - void adicionarAluno: Apendiciona um Aluno a alunos.txt.
    
Classe Livro:

Atributos:

    - string nome_: Armazena o nome do livro.
    - string autor_: Armazena o nome do autor do livro.
    - string ano_: Armazena o ano de publicação do livro.
    - string edicao_: Armazena a edição do livro.
    - string editora_: Armazena o nome da editora do livro.
    - string ID_: Armazena um número de identificação único para o livro.
    - string dataEmprestimo_: Armazena a data em que o livro foi emprestado, se aplicável.
    - enum status status_: enum com a característica do livro (emprestado, regular, perdido)

Métodos:

    - Livro::Livro: Construtor da classe Livro. Ele inicializa todos os atributos do livro com os valores fornecidos.
    - string getNome: Método que retorna o nome do livro.
    - string getAutor: Método que retorna o nome do autor do livro.
    - string getAno: Método que retorna o ano de publicação do livro.
    - string getEdicao: Método que retorna a edição do livro.
    - string getEditora: Método que retorna o nome da editora do livro.
    - status getStatus: Método que retorna a situação do empréstimo do livro (Disponível, Emprestado, Atrasado ou Perdido).
    - string getID: Método que retorna o número de identificação único do livro. 
    - bool Livro::comparar: Método que compara dois livros para verificar se são iguais com base em vários atributos, como nome, autor, ano, edição, etc. Retorna true se forem iguais e false se forem diferentes.
    - vector<Livro> procurarLivros: Método que permite a busca de livros com base em um parâmetro específico, como "Autor," "Nome," "Editora," etc. Ele retorna uma lista de livros que correspondem ao critério de busca.

Classe Notificacao:

Métodos:

    - void notificarPendencia: notifica a pendência.
    - void enviarEmail: envia um email para o aluno devedor.

Classe Situacao:

Atributos:

    - bool pendencia_: atributo booleano que indica se existe pendência ou não.
    - int multa_: valor da multa a ser paga.
    - vector<string> livrosEmprestados_: lista com os livros atualmente emprestados para o aluno.

Métodos:

    - int calcularMulta: calcula a multa.
    - string getSituacao: retorna se a pendencia ou nao.
    - string setSituacao: altera se ha pendencia ou nao.
    - string getLivrosEmprestados: exibe a lista de livros emprestados em nome do aluno.
    - Situacao::Situacao: construtor de situacao.

Classe Barricadas:

Métodos:
    - validarNome(const std::string& nome): Valida um nome.
    - validarTelefone(const std::string& telefone): Valida um número de telefone.
    - validarEmail(const std::string& email): Valida um endereço de email.
    - validarMatricula(const std::string& matricula): Valida uma matrícula.
    - validarCategoriaLivro(const std::string& categoria): Valida uma categoria de livro.
    - validarCategoriaAluno(const std::string& categoria): Valida uma categoria de aluno.
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
- src: Este diretório contém o código-fonte do sistema. Aqui você encontrará os arquivos das classes Alunos, Acervo, Livro, Notificacao, e outros componentes relacionados ao funcionamento do sistema.

- include: Neste diretório, estão localizados os arquivos de cabeçalho (headers) que declaram as classes e métodos utilizados no código-fonte. É onde você encontrará os arquivos .h que descrevem as interfaces das classes.

- doc: A pasta "doc" contém a documentação do projeto. Aqui, você encontrará informações detalhadas sobre a estrutura do código, a descrição das classes, métodos e atributos, bem como informações sobre como usar o sistema.

- test: Este diretório contém os testes unitários e de integração do sistema. Os testes são usados para verificar se o código está funcionando conforme o esperado e se não há regressões ao fazer alterações no código.

- bin: É o diretório onde os arquivos executáveis são gerados após a compilação do código-fonte. Aqui, você encontrará o executável principal do sistema, que pode ser usado para iniciar a aplicação.

- arquivos: O diretório "data" armazena dados de exemplo, como informações de livros, informações de alunos e outros dados que podem ser usados para testar o sistema.

Principais dificuldades:
- Integração das classes: Garantir que as classes Alunos, Acervo, Livro e Notificacao se integrassem de maneira eficaz, com troca de informações e funcionalidades entre elas.

- Cálculo de multas e gestão de datas: Implementar um sistema eficiente de cálculo de multas com base em datas e lidar com a gestão de datas para empréstimos e devoluções de livros.

- Envio de notificações por email: Configurar e integrar a funcionalidade de envio de notificações por email, garantindo que as notificações fossem enviadas aos alunos com pendências de forma correta.

- Testes e validação: Desenvolver testes adequados e garantir que o sistema funcionasse conforme o esperado, incluindo a verificação de casos de uso, tratamento de erros e validação de entradas.