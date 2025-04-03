# C Cheatsheet

## Hello World + Compilar Código

### Código base

```c
#include <stdio.h>

// é sempre int na main
int main(void) { //void = não tem nada, logo não precisas escrever nada
  printf("Hello World!\n");

  return 0; // main precisa sempre returnar o 0
}
```

### Compilar

```bash
gcc -Wall -g hello.c -o hello
```

- `-Wall` - Ativar avisos no compiler
- `-g` - Ativar informações para debugging
- `-o` - Output filename

### Rodar o Código

```bash
./hello
```

## Variáveis

```c
// Maneiras de Inicializar uma Variável
int inteiro = 15;

int inteiro2;
inteiro2 = 15;

// Floats e Chars, como devem ser apresentados
float numeroComVirgual = 5.99; // Usar ponto e não vírgula
char letra = 'D'; // Um só parentese


// Juntar Variáveis numa Única
int x = 5;
int y = 6;
int sum = x + y;

// Definir várias variáveis, do mesmo tipo.
int a = 5, b = 6, c = 50; // Separar com vírgula
```

### Alterar Valores das Variáveis no meio do código

```c
int inteiro3 = 15;
inteiro3 = 10;
```

### Definir uma variável como Constante

> Ela nunca irá mudar o seu valor

```c
const int BIRTHYEAR = 1980; // melhor prática é escrever os nomes das variáveis constantes, tudo em MAIUSCULA
```

## Tipos de Variáveis / Dados

| **Tipo da Variável** | **Especificar o Formato** | **Descrição**                          |
| -------------------- | ------------------------- | -------------------------------------- |
| char                 | %c                        | Coloca apenas uma letra                |
| int                  | %d ou %i                  | Número sem casa decimal                |
| float                | %f                        | Número com casa decimal, menos preciso |
| double               | %lf                       | Número com casa decimal, mais preciso  |

### Como Usar Em Código

```c
// Definir as variáveis
int myNum = 5;
float myFloatNum = 5.99;
char myLetter = 'D';


// Representar em PrintFs
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);
```

### Strings

> Este tipo de variável não existe, mas é possível usar algo parecido, utilizando arrays
>
> Supostamente, isso não é permitido em C, por isso que não se pode trocar os valores das strings, de forma convencional

```c
char greetings[] = "Hello World!";
printf("%s", greetings);

// Outra forma de fazer uma string
char greetings[] = {'H','e','l','l','\0'};

printf("%s", greetings);
// print "Hell!"
```

#### Aceder à String

> Desta forma, apenas conseguimos representar uma única letra

```c
char greetings[] = "Hello World!";
printf("%c", greetings[0]);
```

> Desta forma, temos o acesso a toda a string

```c
char greetings[] = "Hello World!";
printf("%s", greetings);
```

#### Modificar a String

> Basicamente, aqui estamos a mudar o valor que queremos de um dos chars, dentro do array, para ai conseguir mudar a string

```c
char greetings[] = "Hello World!";
greetings[0] = 'J';

printf("%s", greetings);
// prints "Jello World!"
```

## Condições

### IF

> Se (Condição) Faz Isto;
>
> Se Não Faz Isto;


```c
int time = 20;

// Se o tempo for menor que 18, imprime "Goodbye". Se não for menor que 18, então, imprime "Good Evening"
if (time < 18) {
  printf("Goodbye!\n");
} else {
  printf("Good evening!\n");
}


// Se o tempo for menor que 12, imprime "Good Moring". Se não, Se o tempo for menor que 20, imprime "Goodbye". Se não, imprime "Good Evening"
int time = 22;
if (time < 10) {
  printf("Good morning!\n");
} else if (time < 20) {
  printf("Goodbye!\n");
} else {
  printf("Good evening!\n");
}
```

### Switch

```
Switch (Condição //normalmente, um número) {

case 1: Faz Isto; break; //Se o número da condição for 1, então faz algo. Se não for, passa para o outro caso. Quando ele deixar de ser o número da condição, pára e vai para outro.

case 2: Faz Isto; break;

case 3: Faz Isto; break;

default: Faz Isto; // Se a condição não estiver em um dos casos acima, faz isto então.
}
```

```c
int day = 4;

switch (day) {
  case 3: printf("Wednesday\n"); break;
  case 4: printf("Thursday\n"); break;
  default:
    printf("Weekend!\n");
}
```

### While

```c
int i = 0;

// Enquanto a variável for menor que 5, faz isto
while (i < 5) {
  printf("%d\n", i);

// Nunca esquecer de acrescentar um valor na condição, porque se não, fica um loop infinito
  i++; // É igual a "i = i + 1;"
}
```

#### Do /While Loop

> Faz Isto enquanto condição for menor que 5

```c
int i = 0;

do {
  printf("%d\n", i);
  i++;
} while (i < 5);
```

#### While Break

> Sair do For Loop, quando a variável chegar ao número 4 **???**

```c
int i = 0;

while (i < 10) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);

  i++;
}
```

#### While Continue

> Passar à Frente o Número 4 **?**

```c
int i = 0;

while (i < 10) {
  i++;

  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}
```

### For

```c
for (int i = 0; i < 5; i++) {
  printf("%d\n", i);
}
```

#### Sair de um For Loop com Break e Continue

> Sair do For Loop, quando a variável chegar ao número 4

```c
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}
```

> Passar à Frente o Número 4

```c
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}

```

## Arrays

> Todos os Arrays começam com o número **0**.
>
> Eles não começam com o 1

```c
int myNumbers[] = {25, 50, 75, 100};

printf("%d", myNumbers[0]);
// output 25
```

### Mudar Valores no Array

```c
int myNumbers[] = {25, 50, 75, 100};
myNumbers[0] = 33;

printf("%d", myNumbers[0]);
// output 33
```

### Loopar pelo Array

> Basicamente, vai mostrar todos os valores do array, por causa do For

```c
int myNumbers[] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers[i]);
}
```

### Definir um tamanho para o Array

```c
// Declare an array of four integers:
int myNumbers[4];

// add element
myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;

```

## User Inputs

1. Criar Variável para dar store ao input do user
2. Perguntar ao user aquilo a ser inserido
3. usar **scanf**
4. Dar display ao scan do user

```c
int myNum;
printf("Enter a number: ");
scanf("%d", &myNum);
printf("The number you entered: %d\n", myNum);
```

### User Inputs Strings

1. Criar uma String
2. Perguntar ao user aquilo a ser inserido
3. Usar **scanf**
4. Display do scan do User

```c
char firstName[30];
printf("Enter your name: ");
scanf("%s", &firstName);
printf("Hello %s.\n", firstName);
```

## Pointers

> Quando uma variável é criada, é linkada para um espaço na memória do sistema

```c
int myAge = 43;
printf("%d", myAge); // output: 43

printf("%p", &myAge); // Output: 0x7ffe5367e044
```

> Usar o `%p` + `&` faz com que tenhamos o address na memória do sistema
>
> %p = Pointer // & = Address

### Criar Variável com Pointer

> É possível criar uma variável para dar store ao address de uma outra variável

```c
int myAge = 43;
int* pMyAge = &myAge; // variável pointer para dar store à variável myAge

printf("%d\n", myAge); // output: 43

printf("%p\n", &myAge); // output: 0x7ffe5367e044 - Adress da myAge
printf("%p\n", pMyAge); // output: 0x7ffe5367e044 - Address da myAge
// São o mesmo valor, pois compartilham o mesmo espaço na memória, mesmo nos estando a ver duas variáveis diferentes
```

### Dereference - Ter o Valor de Variável, Através de um Pointer

```C
int myAge = 43; 
int* pMyAge = &myAge;

// Printar o valor de myAge, através do pMyAge
printf("%p\n", pMyAge); // output: 0x7ffe5367e044

printf("%d\n", *pMyAge); // output: 43
```

## Operadores

| **Operator** | **Name**  | **Example** |
| ------------ | --------- | ----------- |
| `+`          | Add       | `x + y`     |
| `-`          | Subtract  | `x - y`     |
| `*`          | Multiply  | `x * y`     |
| `/`          | Divide    | `x / y`     |
| `%`          | Modulo    | `x % y`     |
| `++`         | Increment | `++x`       |
| `--`         | Decrement | `--x`       |

### Assignment Operators

| Example   | As             |
| --------- | -------------- |
| x `=` 5   | x `=` 5        |
| x `+=` 3  | x `=` x `+` 3  |
| x `-=` 3  | x `=` x `-` 3  |
| x `*=` 3  | x `=` x `*` 3  |
| x `/=` 3  | x `=` x `/` 3  |
| x `%=` 3  | x `=` x `%` 3  |
| x `&=` 3  | x `=` x `&` 3  |
| x `\|=` 3 | x `=` x `\|` 3 |
| x `^=` 3  | x `=` x `^` 3  |
| x `>>=` 3 | x `=` x `>>` 3 |
| x `<<=` 3 | x `=` x `<<` 3 |

### Comparasion Operators

|      |                          |          |
| ---- | ------------------------ | -------- |
| `==` | equals                   | x `==` y |
| `!=` | not equal to             | x `!=` y |
| `>`  | greater than             | x `>` y  |
| `<`  | less than                | x `<` y  |
| `>=` | greater than or equal to | x `>=` y |
| `<=` | less than or equal to    | x `<=` y |

### Logical Operators

| Symbol | Name          | Description                                   | Example              |
| ------ | ------------- | --------------------------------------------- | -------------------- |
| `&&`   | `and` logical | returns true if both statements are true      | `x < 5 && x < 10`    |
| `\|\|` | `or` logical  | returns true if one of the statements is true | `x < 5 \|\| x < 4`   |
| `!`    | `not` logical | Invert result, return false if true           | `!(x < 5 && x < 10)` |

### Bitwise Operators

| Operator | Description                                                     | Instance                                   |
| -------- | --------------------------------------------------------------- | ------------------------------------------ |
| `&`      | Bitwise AND operation, "AND" operation by binary digits         | `(A & B)` will get `12` which is 0000 1100 |
| `\|`     | Bitwise OR operator, "or" operation by binary digit             | `(A \| B)` will get`61` which is 0011 1101 |
| `^`      | XOR operator, perform "XOR" operation by binary digits          | `(A ^ B)` will get `49` which is 0011 0001 |
| `~`      | Inversion operator, perform "inversion" operation by binary bit | `(~A)` will get `-61` which is 1100 0011   |
| `<<`     | binary left shift operator                                      | `A << 2` will get `240` which is 1111 0000 |
| `>>`     | binary right shift operator                                     | `A >> 2` will get `15` which is 0000 1111  |
