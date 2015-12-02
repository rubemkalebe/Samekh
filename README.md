# Samekh Compiler #

### Apresentação ###

Aqui serão apresentados os passos necessários para executar e manter o *Samekh Compiler*, compilador para a linguagem de programação Samekh.

Essa linguagem segue as especificações apresentadas na documentação, presente dentro da pasta *docs*.

O compilador foi desenvolvido em linguagem **C++** com o auxílio das ferramentas *flex* e *yacc*. Atualmente ele traduz o código escrito em Samekh para código C++ simplificado, com as restrições que também são apresentadas na documentação.

### Estrutura de pastas ###

Muitos projetos em C/C++ utilizam diretórios diferentes para armazenar o código fonte, os objetos e bibliotecas. Neste projeto utilizaremos a seguinte estrutura:

     ./Samekh

       ./docs
  
       ./include
  
       ./obj
  
       ./programTests
  
       ./src

No diretório *include* estão todos os cabeçalhos, no diretório *obj* todos os arquivos objeto, no diretório *docs* estão arquivos de documentação, no diretório *programTests* estão códigos fonte válidos escritos em Samekh e em *src* os fontes do projeto do compilador.

Os arquivos escritos em Samekh possuem extensão **.sak**.


### Como compilar ###

O processo de compilação é bastante simples através do *Makefile* criado, bastando executar o comando *make* para compilar todo o projeto do compilador.


### Como executar ###

  Como resultado do processo de compilação será gerado um executável de nome **sam**, ele é o compilador da linguagem Samekh. Para executá-lo basta invocá-lo passando algum código fonte válido. Se o código fonte não possuir erros será gerado um executável de nome **a.out**, ele será o seu programa resultante do código fonte enviado ao compilador.


### Equipe de desenvolvimento ###

Rubem Kalebe (rubemkalebe@gmail.com)
