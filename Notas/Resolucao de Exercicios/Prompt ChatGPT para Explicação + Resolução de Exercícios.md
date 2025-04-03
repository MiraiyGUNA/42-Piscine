# Prompt ChatGPT para Explicação + Resolução de Exercícios

> Esta prompt foi testada e usada no Microsoft Copilot Online em 2025/02/23
>
> Foi testada para o C01

```md
Olá! Preciso da tua ajuda para resolver uns exercícios relacionados a programação em C. Antes de começar, vou primeiro enviar as regras que preciso de seguir, para que tenha uma boa entrega dos exercícios. No caso, estas são as regras: 

Instruções 

- Somente este documento servirá de referência; não confie nos boatos.
- Releia bem o enunciado antes de entregar os seus exercícios. A qualquer momento pode haver alterações.
- Tenha atenção aos direitos dos seus ficheiros e pastas.
- Deverá seguir o procedimento de entrega para todos os exercícios.
- Os seus exercícios serão corrigidos pelos seus colegas de piscine.
- Além dos seus colegas, a Moulinette também corrigirá os seus exercícios.
- A Moulinette é extremamente rígida na sua avaliação. É completamente automatizada, e é impossível discutir a sua nota com ela. Portanto, seja rigoroso!
- A Moulinette não tem uma mente muito aberta: não tenta entender código que não respeita a Norma. A Moulinette utiliza o programa norminette para verificar a norma dos ficheiros. Seria uma tontice entregar código que não passa pela norminette... 
- Os exercícios são ordenados precisamente do mais simples ao mais complexo. Em caso algum consideraremos um exercício mais complexo se outro mais simples não tiver sido perfeitamente realizado.
- A utilização de qualquer função proibida é um caso de fraude. Qualquer fraude é punida com nota de -42.
- Deve entregar uma função main() se for pedido um programa.
- A Moulinette compila com as flags -Wall -Wextra -Werror, e utiliza cc.
- Se o seu programa não compila, terá 0.
- Você não deve deixar em sua pasta nenhum outro arquivo além daqueles explicitamente especificados pelos enunciados dos exercícios. Você tem alguma dúvida? Pergunte ao seu vizinho da direita. Ou tente também perguntar ao seu vizinho da esquerda.
- Seu manual de referência se chama Google / man / Internet / ....
- Considere discutir no fórum Piscina do seu Intra, assim como no slack da sua Piscina!
- Leia atentamente os exemplos. Eles podem muito bem pedir coisas que não estão especificadas no tema...
- Não deve deixar no repositório de entrega nenhum outro ficheiro além daqueles explicitamente especificados pelo enunciado dos exercícios.
- Tem alguma dúvida? Pergunte ao seu vizinho da direita. Tente, também, com o seu vizinho da esquerda. Não se esqueça de adicionar o standard 42 header nos seus ficheiros .c/.h. A norminette verifica a sua existência de qualquer forma! A Norminette deve ser lançada com a flag -R CheckForbiddenSourceHeader. A Moulinette também a utilizará. 

Agora que tens as regras, a minha ideia é a de eu te enviar o exercício e tu depois entregas a solução/código que é preciso + a explicação do mesmo. Gostava que formatasses tudo em markdown, para eu depois ler! Percebeste aquilo que te peço?
```

Depois dele confirmar que percebeu, envio esta mensagem

```md
OK, aqui está o enunciado do exercício 03. 

Exercício : 03 ft_div_mod Pasta de entrega : ex03/ Ficheiros para entregar : ft_div_mod.c Funções autorizadas : Nenhuma • Escreva uma função ft_div_mod que tenha a seguinte prototipagem: void ft_div_mod(int a, int b, int *div, int *mod); • A função divide os dois parâmetros a e b e armazena o resultado no inteiro apontado por div. Ela também armazena o resto da divisão de a e b no inteiro apontado por mod.
```