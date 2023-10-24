# BibliotecaPlus
Sistema de Biblioteca Avançado: 

Descrição do Projeto:  

As bibliotecas da universidade precisam de um sistema que controle o estoque de livros, permita consulta de títulos, gerencie multas, atrasos de devolução e envie notificações sobre devoluções. É necessário que o sistema seja de fácil implementação, eficiente, tenha interface intuitiva e que incorpore os princípios de programação orientada a objetos. 

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
    Terão três classes principais: Alunos, Bibliotecário e Livros. 

Classe Alunos: 

Atributos: 
    - Pessoa (): Struct que identifica o usuário (nome, telefone, login, senha, email, matrícula).
    - Multa (): Float que calcula a multa por atraso de devolução.
    - Empréstimos (): String que acusa se existe empréstimos com o aluno.

Métodos: 
    - ConsultarDados: Permite que o aluno veja seus dados cadastrados (nome, telefone, login, senha, email, matrícula).
    - ProcurarLivros (PorNome, PorAutor, PorEditora, DetalhesLivro): Permite que o usuário veja a situação e detalhes do livro que está procurando, a busca pode ser feita pelo título, pela editora ou pelo autor.
    - ConsultarSituacao (CalcularMulta, LivrosEmprestados, ChecarPendencia, HistoricoEmprestimos): Consulta a situação do usuário, se existe alguma pendência, algum livro emprestado, mostra o histórico de empréstimos e, se houver, calcula multas.


Classe Bibliotecário: 

Atributos: 
    - Pessoa (): Struct que identifica o usuário (nome, telefone, login, senha, email, matrícula).

Métodos: 

    - ProcurarLivro (PorTitulo, PorAutor, PorEditora, DetalhesLivro): Permite que o usuário veja a situação e detalhes do livro que está procurando, a busca pode ser feita pelo título, pela editora ou pelo autor.
    - EditarAcervo (AdicionarLivro, RemoverLivro, EditarLivro (EditarTitulo, EditarAutor, EditarEditora, EditarDetalhes)): Edita as informações de livros no acervo, pode adicionar, remover ou mudar informações. 
    - EditarCadastros (AdicionarPessoa, RemoverPessoa, EditarPessoa (EditarNome, EditarSenha, EditarEmail, EditarMatricula)): Edita cadastros de usuários, pode adicionar, remover ou mudar informações.
    - Emprestar (ConsultarSituacao, ProcurarLivro (PorNome, PorAutor, PorEditora, DetalhesLivro), EmprestarLivro): Computa empréstimos de livros e atualiza o sistema com a situação atual da obra.
    - Devolver (ConsultarSituacao, ProcurarLivro (PorNome, PorAutor, PorEditora, DetalhesLivro), CalcularMulta, ReceberLivro): Computa devoluções de livros e atualiza o sistema com a situação atual da obra.

Classe Livros:

Atributos:

    - Nome (): String que informa o nome da livro.
    - Autor (): String que informa quem escreveu o livro.
    - Ano (): String que informa ano de publicação do livro.
    - Edição (): String que informa edição.
    - Seção (): String que informa em qual seção o livro se encontra.
    - Bibliotecas (): String (?)
    - Editora (): String que informa  a editora.
    - Número (): String que informa o número de identificação do livro.
    - Situação (): Enum  que indica situação do empréstimo, acusa qualquer pendência e/ou multa. 

