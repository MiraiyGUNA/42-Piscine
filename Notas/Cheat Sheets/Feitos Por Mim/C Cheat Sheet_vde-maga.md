# C Cheat Sheet_vde-maga

## Write

```c
include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';

	
	while (letter <= 'z')
	{
		//print letter
		write(1, &letter, 1);

		//go to next letter
		letter++;
	}
}
```

### Parâmetros do Write

> Dentro do Write, existem 3 parâmetros

```c
write(1,variável, 1); 
```

#### FD (File Descriptor) - Onde dar Display

- 1 = default (terminal, quase sempre)
- 2 = erro no programa (também no terminal)

> Como **SUPOSTAMENTE** escrever num ficheiro, ao invés do terminal 

```c
int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
write(fd, &letter, 1);
close(fd);
```

#### Buffer - Onde na Memória Escrever

Basicamente, ira sempre ser um pointer e como tal, é preciso usar o indicador `&` *(A comercial, que vem de address)*

Também dá para o fazer num pointer e ficaria **SUPOSTAMENTE** desta forma

```c
char *message = "Hello, world!";
write(1, message, strlen(message));
```

Por último, também dá para o fazer com um array de dados, que seria **SUPOSTAMENTE** desta forma

```c
char buffer[100];
// preenche o buffer com dados
write(fd, buffer, 100);
```

#### Count - Número de Bytes em Ação 

Quantos bytes serão escritos, ou seja, quantas vezes o write será usado na instância 

==ESCREVER SOBRE COMO FAZER EM ARRAYS E O CARALHO==



