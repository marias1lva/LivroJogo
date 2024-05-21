# Livro Jogo

## Ideia Principal
Segundo a Wikipedia (2020), um livro-jogo (também conhecido como "aventura solo") é uma obra de ficção que permite ao leitor participar da história, fazendo escolhas eficazes. Esse gênero, que surgiu nos anos 1960-1970, tornou-se famoso em 1982 com "O Feiticeiro da Montanha de Fogo", o primeiro livro da série Aventuras Fantásticas (Fighting Fantasy no original). Esse livro uniu o conceito dos livros-jogos ao dos RPGs, criando uma modalidade de livro-jogo composta por aventuras que podem ser jogadas sozinhas.

Em cada página ou trecho do livro, uma parte da história é contada. A leitura sempre começa pela página ou trecho 1. Após essa leitura introdutória, na qual o leitor é apresentado como o personagem principal da história, são oferecidas algumas opções sobre o rumo que ele deseja seguir em sua aventura. Cada escolha direciona o leitor para um trecho específico, e ele deve pular diretamente para esse trecho, ignorando todas as páginas ou trechos intermediários.

## Sobre do Projeto

Este projeto foi elaborado para uma atividade avaliativa da matéria de Algoritmos e Programação no primeiro semestre de Ciências da Computação. O projeto foi feito em grupo e na linguagem C++.

Os critérios avaliativos foram: 
- Organização e clareza do código;
- Elaboração de roteiro da história (criatividade);
- Funcionamento correto do código;
- Recursos de linguagem utilizados;

### Criando o roteiro do livro-jogo
Para desenvolver este trabalho, foi criado um roteiro, no qual contamos a história e destacamos as decisões que o jogador poderia tomar e suas consequências.

### Programando a história
O projeto foi feito em C++.\
Utilizamos de comandos de saída de texto (cout) para escrever a história.
Para que o personagem principal possa escolher o rumo que sua história, o jogo permite que o jogador insira suas decisões com comandos de leitura (cin), essas entradas são utilizadas para decidir o rumo que a história irá tomar, para isso utilizamos as técnicas de desvio condicional aprendidas em aula (if else e while). Além disso, O enredo pode ser alterado por decisões anteriores ou objetos encontrados pelo caminho, para isso foram criadas variáveis para registrar algumas dessas decisões.


## Como jogar
Para jogar o jogo clone o repositório em seu computador com o comando abaixo:
```bash
git clone https://github.com/marias1lva/LivroJogo.git
```
Após, abra o repositório em uma IDE de sua preferência, e rode o programa. Suas escolhas e a história do jogo são feitas pelo console.


### Objetivo
O objetivo é guiar Kaito através de suas escolhas e ver onde o destino o leva, buscando redenção e um novo propósito para sua vida.

### Dado da Sorte
No código, há um trecho que simula o uso de um dado de sorte para determinar o resultado de uma situação.

```cpp
int resultado = rand() % 10 + 1;
cout << "Um vidente local diz que você vencerá se os dados mostrarem números pares. Seu resultado é: " << resultado << endl << endl;
if (resultado % 2 == 0) {
    cout << "O DESTINO LHE SORRIU!" << endl << endl;
    // código para a situação de sucesso
} else {
    cout << "FIM DO EXÉRCITO HASHIRA! O DESTINO LHE DISSE!" << endl << endl;
    // código para a situação de falha
}
```

A função rand() gera um número aleatório entre 0 e RAND_MAX, que é uma constante definida pela implementação. O operador % é usado para obter o resto da divisão desse número por 10, então o resultado será um número entre 0 e 9. Depois, é adicionado 1 ao resultado anterior para garantir que o número gerado seja entre 1 e 10, em vez de 0 e 9.\
Por fim, verifica se o número gerado é par. Se for par, o "DESTINO LHE SORRIU!", indicando um resultado positivo. Caso contrário, a situação é tratada como uma falha, indicando que o "FIM DO EXÉRCITO HASHIRA! O DESTINO LHE DISSE!".\
O dado de sorte é usado para introduzir um elemento de aleatoriedade e incerteza no jogo, onde o resultado pode influenciar o rumo da história, adicionando um elemento emocionante de sorte e imprevisibilidade para o jogador.




