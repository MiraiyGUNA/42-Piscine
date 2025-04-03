# Dificuldade das Perguntas de Exame 01

Baseado nestes Exames

https://github.com/waltergcc/42-Piscine/tree/main/Exams%20Practice/Exam01


## 0-only_z

Write a program that displays a 'z' character on the standard output.

>**Facílimo** 

```c
#include <unistd.h>

// deliver the program with the main
int		main(void)
{
	// Show 'z' on the standard output
	write(1, "z", 1);
}
```

## 1-ft_strlen

Write a function that returns the length of a string.

Your function must be declared as follows:

`int	ft_strlen(char *str);`

> **Fácil** 

1. Fazer um While Loop, onde básicas passamos por todo o array
	1. Apenas passamos na condição, o array
	2. Por fim, incrementamos
2. Por fim, retomamos a variável usada no array, que terá o número de valores no array 

```c
// #include <stdio.h>

// Deliver only this function
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	// While the string doesn't reach the null the counter "i" will be increased
	while (str[i])
		i++;

	// In the end the function returns the number of characters counted
	return (i);
}
/* 
int	main(void)
{
	char	*str = "Hello World!";
	int	lenght;
	
	lenght = ft_strlen(str);
	printf("String: %s\nLenght: %d\n", str, lenght);
} */
```

## 1-ft_swap

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

`void	ft_swap(int *a, int *b);`


> **Fácil** 

1. Criar uma variável temporária 
2. Associar o primeiro valor recebido à variável temporária 
3. Associar primeiro valor ao segundo valor
	1. Agora, o primeiro valor, tem o valor do segundo 
4. Associar o segundo valor à variável temporária 

```c
// #include <stdio.h>

// deliver only the function
void	ft_swap(int *a, int *b)
{
	// variable that keeps one of the values temporarily
	int	temp;

	// This instruction exchanges the values to which pointers are pointing
	temp = *a;
	*a = *b;
	*b = temp;
}
/* 
int	main(void)
{
	int	a = 15;
	int	b = 35;
	
	printf("Before ft_swap:\n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);

	// swap the values with each other
	ft_swap(&a, &b);

	printf("\nAfter ft_swap: \n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);
} */
```

## 1-rev_print


Write a function that takes a string and displays the string in reverse
order followed by the newline.
Its prototype is constructed like this : 
  `char *ft_rev_print (char *str)`
  
It must return its argument


Examples:

```bash

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
```


> **médio** 

1. Como forma de testar, criamos um `main` que irá receber `int argc` e `char **argv`
	1. `argv` serve para passar o string (array de chars), através da execução do programa
	2. `argc` serve para verificar se apenas foi entregue um único argumento
		1. No caso, esta verificação é feita através do `if (argc == 2)` que irá fazer com que retorne 1, que será um erro
2. Da `main`, criamos a função pedida, chamada `*ft_rev_print`
	1. Ela tem um pointers, pois estamos a alterar uma string e desta forma não só podemos retomar como receber essa string.
		1. No caso de tipos de dados primitivos, como inteiros, poderíamos passá-los diretamente por valor e retornar o resultado. No entanto, ao trabalhar com strings, que são arrays de caracteres, usar um ponteiro é mais eficiente e prático.
	2. Também é feita com um pointer, pois assim temos acesso direto do conteúdo recebido através da `main`, como o `argv` e `argc`
		1. Ao passar um ponteiro para uma string, a função pode acessar e manipular diretamente a memória onde a string está armazenada, permitindo uma modificação eficiente da string original, se necessário.
		2. Além disso, usar um ponteiro facilita a iteração e manipulação dos caracteres na string, como necessário para imprimir a string em ordem inversa no caso da função `ft_rev_print.`
	3. No caso, estamos a receber `char *str` da função `main`
		1. Como estamos a receber um ponteiro, não é necessário usar `&` dentro da função quando queremos acessar o conteúdo da string, porque já recebemos o endereço dessa variável.
		2. Outra coisa é que, nos parâmetros que recebemos, estamos a especificar que é um caractere (`char`), um ponteiro (`*`), e o nome da variável (`str`):
			1. `char` é porque realmente estamos a trabalhar com caracteres e queremos que a função trate os dados como caracteres. Em C, não podemos simplesmente mudar o tipo da variável para converter valores.
			2. Usamos um ponteiro (`*`) porque estamos a receber o endereço de uma string (array de caracteres). Isso é necessário para manipular eficientemente a string passada como argumento.
			3. O nome da variável é `str` por conveniência e clareza, mas poderíamos usar qualquer outro nome. No entanto, é comum usar nomes descritivos para facilitar a leitura e compreensão do código.
	4. Depois, criamos variáveis 
		1. Começamos por criar uma variável para o `while` e para outras lógicas mais à frente, com o nome `i`.
		2. Também criamos uma variável `last` que servirá para calcular o último espaço com caracteres, no array recebido, ou seja, para saber o último caracter do array
	5. Criamos o primeiro `while`
		1. Este tem como objetivo de incrementar o valor de `i`, de forma a saber o tamanho do array recebido
	6. Depois com o tamanho do array, fazemos a descoberta do último caracter do array
		1. Fazemos isto, ao pegar no tamanho do array e subtrair por 1
		2. Fazemos assim, porque todos os arrays começam em 0, portanto, o tamanho do array e os valores do array são valores com um de diferença
	7. Geramos um novo `while` que tem como objetivo de escrever todos os caracteres do array recebido, mas no caso, ao contrário
		1. Para tal efeito, fazemos o comum while de write, onde fazemos uma condição onde comparamos o tamanho do array com o final do mesmo
		2. Como estamos a fazer ao contrário e temos o tamanho máximo do array, então, fazemos `last >= 0` junto com `last--`
		3. Desta forma, percorremos todo o array, mas da direita para a esquerda
		4. Durante isso tudo, usamos `write(1, &str[last], 1)` para escrever todos os valores
	8. Se nada disto acontecer, então, simplesmente escreve uma `\n`
	9. Como pedido pelo exercício, retomamos com a string com `return (str);`





```c
#include <unistd.h>

// deliver only this function 
char	*ft_rev_print(char *str)
{
	int i = 0;
	int last;
	char temp;

	// Count the string length
	while (str[i])
		i++;

	// 'last' receives the String Lenght - 1
	last = i - 1;
	while (last >= 0)
	{
		// Prints the char in this index
		write(1, &str[last], 1);

		// Go to the next indices
		last--;
	}
	// Print the new line only at the end of the string
	write(1, "\n", 1);
	return (str);
}
/* 
int	main(int argc, char **argv)
{
	// only calls the function if you have only 2 arguments
	if (argc == 2)

		// Send to print the argument in position 1
		ft_rev_print(argv[1]);
} */
```


1. **Teste na Função `main`:**

   A função `main` recebe dois argumentos: `int argc` (contagem de argumentos) e `char **argv` (vetor de argumentos).

   1. `argv` é usado para passar a string (array de caracteres) ao executar o programa.
   2. `argc` é usado para verificar se apenas um único argumento foi fornecido.
      1. A verificação é feita com `if (argc == 2)`. Isso garante que o programa recebeu o nome do programa e um argumento adicional.

2. **Função `ft_rev_print`:**

   A função `ft_rev_print` é responsável por imprimir a string em ordem inversa. O protótipo da função é `char *ft_rev_print(char *str)`. Abaixo estão os detalhes do funcionamento da função:

   1. **Uso de Ponteiro:**
      1. A função utiliza um ponteiro (`char *str`) porque estamos a trabalhar com strings. Usar um ponteiro permite manipular a string diretamente, sem a necessidade de copiar os dados.
      2. No caso de tipos de dados primitivos, como inteiros, podemos passá-los diretamente por valor. No entanto, ao trabalhar com strings (arrays de caracteres), usar um ponteiro é mais eficiente em termos de memória e desempenho.

   2. **Recepção de Argumentos da `main`:**
      1. O ponteiro `char *str` é recebido da função `main` através do argumento `argv`.
      2. Como estamos a receber um ponteiro, podemos acessar diretamente o conteúdo da string sem usar o operador `&` para obter o endereço.

   3. **Declaração de Variáveis:**
      1. Declaramos a variável `int i` para contar o comprimento da string.
      2. Declaramos a variável `int last` para armazenar o índice do último caractere da string.

   4. **Contagem do Comprimento da String:**
      1. Usamos um loop `while` para contar o comprimento da string:
         ```c
         while (str[i])
             i++;
         ```
      2. Este loop incrementa `i` até encontrar o caractere nulo (`'\0'`), que indica o fim da string.

   5. **Determinação do Último Caractere:**
      1. O índice do último caractere é calculado subtraindo 1 do comprimento da string:
         ```c
         last = i - 1;
         ```

   6. **Impressão da String em Ordem Inversa:**
      1. Usamos um segundo loop `while` para imprimir a string em ordem inversa:
         ```c
         while (last >= 0)
         {
             write(1, &str[last], 1);
             last--;
         }
         ```
      2. O loop começa no final da string e decrementa `last` até chegar ao início da string, imprimindo cada caractere na ordem inversa.

   7. **Impressão de Nova Linha:**
      1. Após o loop, escrevemos um newline (`\n`) para finalizar a saída:
         ```c
         write(1, "\n", 1);
         ```

   8. **Retorno da String Original:**
      1. A função retorna a string original (`str`):
         ```c
         return (str);
         ```


## 2-first_word

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:
```

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
```


> **Médio **

1. Receber os argumentos `argv` e `argc` da `main`:
    1. `argc` (argument count) recebe um valor inteiro que representa o número de argumentos passados para o programa.
    2. `argv` (argument vector) é um array de strings (array de caracteres) que contém os argumentos passados para o programa.

2. Criamos uma variável `i`, como forma de gerar um ciclo `while`.

3. Antes de executar o código principal, fazemos uma verificação com o `if` para ver se foram entregues os argumentos corretos para a `main`:
    1. Se o `argc` for igual a dois, então, podes continuar.
        1. `argc` ser igual a dois significa que este recebeu:
            1. O nome do programa.
            2. O argumento passado na hora de executar o programa.
    2. Se a condição `argc == 2` não for verdadeira, escrevemos apenas `\n`, que é um line break.

4. Começamos o primeiro ciclo `while`, que tem como função passar à frente todos os espaços em branco da string recebida por `argv`, no começo da mesma:
    1. Isto é importante porque procuramos a primeira palavra e não a primeira instância de um caractere no array.
    2. Estamos a percorrer a string da esquerda para a direita.
    3. Todos os `while` precisam de um "movimento", e este ocorre aqui por causa do `i++`.

5. Depois de verificado que o primeiro valor do array não é um caractere em branco, passamos para o próximo `while`:
    1. Este `while` tem a função de realmente escrever a primeira palavra da string recebida.
    2. A parte importante está na condição do `while`:
        1. `av[1][i] != '\0'` serve como condição para o `while` continuar até que cheguemos ao fim da string.
            1. Nota que todas as strings em C, tal como as recebidas por `argv`, terminam sempre num `\0` (caractere nulo).
        2. Também fazemos uma verificação para encontrar o próximo espaço em branco, que indicaria o início da próxima palavra na string.
            2. Fazemos essa verificação usando `&&`, que significa "e".
        3. A segunda verificação que fazemos é a procura por espaços em branco através de `av[1][i] != ' ' && av[1][i] != '\t'`.
            1. Esta é a mesma lógica usada para procurar o primeiro espaço em branco, mas agora serve para procurar o próximo espaço em branco.
                1. Relembrando que estamos a ler a string da esquerda para a direita, é aqui que encontramos o segundo espaço em branco.
        4. Encontrado o intervalo da primeira palavra, fazemos o `write` da mesma, com os caracteres verificados pelo `while`.
        5. Para que toda esta verificação e escrita ocorram, incrementamos o `i++`.
            1. Este `i` não entra em conflito com o do primeiro `while` porque ele só é executado até encontrar o primeiro espaço em branco. Depois disso, ele fica "inativo" enquanto o código fica "preso" no segundo `while`.


```c
#include <unistd.h>

// deliver the program with the main
int		main(int ac, char **av)
{
	int i;

	i = 0;

	// Check if it have only 2 arguments
	if (ac == 2)
	{
		// Go to the next character is space or tab
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;

		// while the argument 1 is not over and it is not space or tab
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{
			// Prints the char
			write(1, &av[1][i], 1);
			i++;
		}
	}
	// Print the new line only at the end of the string
	write(1, "\n", 1);
	return (0);
}
```

## 2-ft_strrev

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

`char    *ft_strrev(char *str);`

> Médio

1. Recebemos a string da `main`.
2. Criamos 3 variáveis:
	1. `i` para tratar dos loops:
		1. Ela vai percorrer o array no primeiro loop para calcular o tamanho da string.
		2. Ela vai ajudar a calcular a posição do último carácter do array com `last = i - 1`, porque arrays começam em 0.
		3. Ela será reutilizada no segundo `while` para percorrer o array desde o início.
		4. Por fim, `i` será uma variável para trocar o começo do array com o fim, utilizando `temp` como intermediário.
	2. `last` como forma de saber o último carácter do array:
		1. Ela também serve como uma variável para a troca dos elementos com `i`.
	3. `temp` como forma de guardar temporariamente um valor do array durante a troca de elementos.
3. O primeiro `while` serve para calcularmos o tamanho do array.
4. Calculamos a última posição do array com `last`.
5. Fazemos `reset` a `i` para começar a percorrer o array da esquerda para a direita no segundo loop.
6. Iniciamos o segundo `while` que percorre o array até à metade, para trocar os elementos do início com os do fim:
	1. Guardamos o valor do início do array em `temp`.
	2. Trocamos o valor do início do array (`i`) com o do fim (`last`).
	3. Passamos o valor temporário (`temp`) para a posição `last`, completando a troca.
7. Retornamos com o array de `char` invertido (`str`).

```c
// #include <stdio.h>

// deliver only this function 
char	*ft_strrev(char *str)
{
	int i = 0;
	int last;
	char temp;

	// Count the string length
	while (str[i])
		i++;

	// 'last' receives the String Lenght - 1
	last = i - 1;
	i = 0;
	while (last > i)
	{
		// Change the first index with the last
		temp = str[i];
		str[i] = str[last];
		str[last] = temp;

		// Go to the next indices
		i++;
		last--;
	}
	return (str);
}
/* 
int	main(void)
{
	char	str[17] = "words and letters";

	printf("Regular String: %s\n", str);
	printf("Reversed String: %s\n", ft_strrev(str));
} */
```

## 2-rot_13

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

`$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $`

> Médio

1. Recebemos os argumentos na hora de executar o programa, nos argumentos de main
	1. `argc` é a quantidade de argumentos recebidos
		1. Ela sempre será um, porque tem o nome do programa
		2. Ele será a forma que temos para verificar se realmente foi entregue, um argumento na hora de rodar o programa
	2. `**argv` é os argumentos em si, ordenados num array "duplo", algo como `argv[1][10]`, que significa o parametros que demos na hora de executar e o seu caracter 11
2. Criamos uma variável `i` para os ciclos whiles
	1. Ela servirá para termos acesso aos caracteres de `argv`
3. Fazemos um `if` para verificar se `argc == 2`, ou seja, foi recebido o nome do programa + o parametro a ser executado
	1. Se esta condição for verdade, continuamos o programa
	2. Se não for verdade, então, apenas escreve uma breakline
4. Criamos um `while` que irá passar por todos os caracteres de `argv[1]`, ou seja, o que escrevemos na hora de executar o programa
	1. Aqui criamos um `if` com `else if`, ou seja se e Se não, então
		1. No começo, verificar se o caracter está entre `a` e `m`, nas suas versões maiusculas e minusculas
			1. Se isso for verdade, então, incrementamos 13 ao caracter, fazendo assim como era pedido no exercicio
		2. Se o valor recebido não se encontra no primeiro if, então, se não, ele estará entre `n` e `z`
			1. Fazemos esta segundo verificação, porque na ascii table, estes valores, quando incrementados por 13, não irão dar a sua versão maiuscula/minuscula mas sim um outro caracter
			2. Para resolver isso, apenas precisamos de, ao invés de incrementar, subtraimos
	2. Com todos os caracteres alterados, então, escrevemos os mesmos com `write`
	3. Para que o while ocorra, fazemos também a soma do `i` em um, por ele mesmo


```c
#include <unistd.h>

// deliver the program with the main
int	main(int argc, char **argv)
{
	int	i = 0;

	// only calls the function if you have only 2 arguments
	if (argc == 2)
	{
		while(argv[1][i])
		{
			// If 'Char' is between 'a' and 'm', 'Str' receives 'Char' + 13
			if((argv[1][i] >= 'A' && argv[1][i] <= 'M') || (argv[1][i] >= 'a' && argv[1][i] <= 'm'))
				argv[1][i] += 13;

			// If 'Char' is between 'n' and 'z', 'Str' receives 'Char' - 13
			else if((argv[1][i] >= 'N' && argv[1][i] <= 'Z') || (argv[1][i] >= 'n' && argv[1][i] <= 'z'))
				argv[1][i] -= 13;

			// Prints the char
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	// Print the new line in the end
	write(1, "\n", 1);
}
```

## 2-rotone

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

`$>./rotone "AkjhZ zLKIJz , 23y " | cat -e`

> Médio

1. É igual ao anterior, mas ao invés de fazermos o +13, simplesmente fazemos +1
2. Única diferença é que precisamos verificar se o caracter recebido for `z` ou `Z`, para ao invés de adicionar +1, subtraimos por -25, fazendo que este vá para `a` ou `A`
	1. Para fazer isso, depois do `if`, fazemos um `else if`, com essa condição

```c
#include <unistd.h>

// deliver the program with the main
int	main(int argc, char **argv)
{
	int	i = 0;

	// only calls the function if you have only 2 arguments
	if (argc == 2)
	{
		while(argv[1][i])
		{
			// If 'Char' is between 'a' and 'y', 'Str' receives 'Char' + 1
			if((argv[1][i] >= 'A' && argv[1][i] <= 'Y') || (argv[1][i] >= 'a' && argv[1][i] <= 'y'))
				argv[1][i] += 1;

			// If 'Char' is 'z', 'Str' receives 'Char' - 25
			else if((argv[1][i] == 'z' || argv[1][i] == 'Z'))
				argv[1][i] -= 25;

			// Prints the char
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	// Print the new line in the end
	write(1, "\n", 1);
}
```

## 3-inter

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

`$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$`

> Díficil






