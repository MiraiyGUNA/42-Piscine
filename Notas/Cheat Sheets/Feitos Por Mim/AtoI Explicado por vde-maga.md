# AtoI Explicado por vde-maga

## Para que Serve um AtoI

> AtoI é uma função que converte Strings em Inteiros

Ou seja, convertemos `"9,8,7"` em `9,8,7` mas em inteiros e não em strings/chars

A vantagem de fazer um AtoI é que podemos fazer somas com os inteiros, coisa que com os chars, não é possível. 

Acabamos por usar AtoI's, quando, por exemplo, estamos a receber uma string do user, que este acaba por dar input a números. Muitas das vezes, os números que recebemos, não são inteiros, mas sim characters, logo, precisamos os converter, se formos fazer contas.

## Quando é que usamos 

- **Entrada de dados:** Quando lêmos dados numéricos como strings de um arquivo, entrada do user, ou rede, e precisamos convertê-los para inteiros para realizar operações matemáticas.
- **Configurações e parâmetros:** Muitas vezes, programas recebem configurações ou parâmetros como strings (por exemplo, argumentos de linha de comando) que precisam ser convertidos para inteiros.
- **Processamento de dados:** Quando manipulamos dados que foram armazenados ou transmitidos como strings.

## Como implementar um

### Essência de um AtoI

> Basicamente, só precisamos de **Subtrair em '0'** 

```c
str[i] - '0';
```

Este `'0'` representa, na realidade, o número 48, na ascii table e todos os números que recebemos da string, quando subtraídos por 48, eles serão alocados para o valor exato que eles representa, mas para inteiros

Usamos `''`, porque quando usamos estas aspas, o compilador faz a própria conversão para o valor na ascii table

### Passo a Passo, em C

#### 1. Iniciar a função

Neste passo, vamos criar algumas variáveis e converter alguns dos possíveis erros que tenhamos do utilizador.

Um erro muito comum é para com espaços em brancos e também colocar o `-` ou o `+`

No código, em baixo, a correção desses erros comuns, é feito através de dois `if statments`

```c
int atoi(char *str) {
    int resultado = 0;  // Este será o resultado final
    int sinal = 1;  // Para lidar com números negativos
    int i = 0;  // Índice para percorrer a string

    // Corrigir Espaços em Branco, tabs e similares
    // 
    while ((str[i] >= 9 && str[1] <= 13 || str [i] == 32) {
        i++;
    }

    // Corrigir sinais '+' e '-'
    if (str[i] == '-') {
        sinal = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }
```


#### 2. Converter os Chars para Ints

**While Loop**

Neste passo, vamos usar um `while loop`, que irá percorrer todo a string/array, e converte todos os números chars que ele encontrar, em números inteiros

Para que o `while`, percorra todos os números do array e apenas corriga os que são números, fazemos a condição que se pode traduzir desta maneira: 

> Enquanto o valor for maior ou igual a 0 E o valor for menor ou igual a 9, então

Esta condição, permite que apenas os chars `"0123456789"` sejam afetados pelo loop

Agora, para com o que vamos fazer, precisamos compreender a lógica da conversão destes chars para ints

**Variável `resultado` e a conversão**

A variável que vai entregar o resultado final, ou seja, que entrega apenas os números em formato de int, será a variável `resultado`

Esta variável tem uma conta matemática, que fará com que converta os chars para ints

Isto é possível porque, em primeiro lugar, fazermos o `(str[i] - '0')` que irá converter o char em int

Depois, a parte `resultado * 10 +` nada mais é, do que, uma forma de "voltar a colocar no lugar do array"

Exemplo:

1. Início com `resultado = 0`
2. Para o primeiro dígito, `'1'`: `resultado = 0 * 10 + (1)` resulta em `resultado = 1`
3. Para o segundo dígito, `'2'`: `resultado = 1 * 10 + (2)` resulta em `resultado = 12`
4. Para o terceiro dígito, `'3'`: `resultado = 12 * 10 + (3)` resulta em `resultado = 123`

**Porque é que a parte `str[i] - '0'` converte os chars em ints?

Basicamente, isto é tudo por causa da ASCII Table. Como já expliquei no "essência do atoi", o valor `'0'` representa 48.

Quando subtraímos um char que representa um número, por 48, esse mesmo char terá o mesmo número mas será um int.

**Display de Negativo vs. Positivo**

Como já explicado anteriormente, existe um `if` para verificar se será um número negativo ou positivo.

Na hora de representar o array de ints, nós multiplicamos o `resultado` com o `sinal`. 

Este `sinal`, apenas pode ser `-1` ou `1` e quando um número é multiplicado por 1, ele não altera e quando um número positivo é multiplicado por -1, ele apenas fica negativo

```c
    // Percorrer cada caractere na string até encontrar um não numérico
    // Enquanto o valor for maior ou igual a 0 E menor ou igual a 9, então
    while (str[i] >= '0' && str[i] <= '9') {
	    // resultado é igual a ele mesmo * 10 + (valor - '0')
        resultado = resultado * 10 + (str[i] - '0');
        i++;
    }

    // Aplicar o sinal ao resultado final
    return resultado * sinal;
}
```

#### Função completa


```c
int atoi(const char *str) {
    int resultado = 0;
    int sinal = 1;
    int i = 0;

    while (str[i] == ' ') {
        i++;
    }

    if (str[i] == '-') {
        sinal = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        resultado = resultado * 10 + (str[i] - '0');
        i++;
    }

    return resultado * sinal;
}
```
