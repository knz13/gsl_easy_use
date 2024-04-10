
# GSL Easy Use

Repositório criado para ajudar a turma de MNE 2024.1 da UnB a utilizar a biblioteca GSL (GNU Scientific Library) durante o semestre.

## Dependencias

Primeiramente, é necessário ter o [Python](https://www.python.org/downloads/) instalado, se não instalou ainda, so clicar no link acima.

Agora, precisamos instalar o [CMake](https://cmake.org/download/), uma ferramenta que facilita o build de projetos C/C++. Basta clicar no link acima para instalar a ferramenta.

## Instruções (VSCode)

Se você ainda não utiliza o [VSCode](https://code.visualstudio.com/download) ele é uma IDE (integrated development environment), um editor de código com muitas ferramentas para programar. Caso queira instalar, basta clicar no link acima.

### 1 - Instalar a extensão CMake Tools

Para deixar mais fácil rodarmos nosso código em C/C++, é interessante instalar a extensão CMake Tools que pode ser encontrada na aba de extensões do VSCode:

### 2 - Configurar o CMake

Agora, vamos configurar o projeto. Basta apertar as teclas CTRL+SHIFT+P no Windows ou COMMAND+SHIFT+P no MacOS e digitar "cmake configure" conforme a imagem abaixo:

Basta esperar que o CMake vai baixar a biblioteca GSL na pasta src/vendor (não utilizaremos a do sistema pois isso deixa mais difícil de o Intelisense - o code completer - possa encontrar a biblioteca e fornecer autocomplete quando você estiver codando)

### 3 - Rodar o build pela primeira vez

É importante rodar o build uma primeira vez caso não tenha a biblioteca GSL já instalada no seu computador para que o CMake possa criar os includes dentro da pasta build. Basta clicar no botão conforme a foto abaixo

### 4 - Boa programação!

Agora basta programar seu código no arquivo em src/main.c (pode mudar para main.cpp caso queira utilizar C++) e clicar no mesmo botão do passo 3 para rodar seu código!



