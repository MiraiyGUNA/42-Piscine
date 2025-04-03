# ARGC E ARGV

- `argc` (argument count) é um inteiro que indica o número de argumentos passados para a função `main`, incluindo o nome do programa. Então, ele conta quantos argumentos o programa recebeu. - INT

- `argv` (argument vector) é um array de strings (char **), onde cada elemento do array contém um dos argumentos passados para o programa. O primeiro elemento, `argv[0]`, é o nome do programa compilado. - CHAR []
	- Um array de chars, sempre será recebido, pelo menos no main, até onde eu sei, por char **nomeDoArray

Aqui está uma revisão do exemplo para ajudar:
```c
int main(int argc, char **argv)
{
    // Se o programa é executado como ./myprogram arg1 arg2
    // argc será 3
    // argv[0] será "./myprogram"
    // argv[1] será "arg1"
    // argv[2] será "arg2"
}
```