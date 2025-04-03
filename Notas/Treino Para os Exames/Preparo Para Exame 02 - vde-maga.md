# Preparo Para Exame 02 - vde-maga

## 0-aff_a

> Fácil **2/10**

Verificar apenas se vale usar break ou não, no exame

```c
#include <unistd.h>

int		main(int argc, char **argv)
{
	int i = 0;

	// Check if it have only 2 arguments
	if (argc == 2)
	{
		while (argv[1][i])
		{
			// If it find a 'a', it prints it and leaves the loop
			if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				break ;
			}
			i++;
		}
		// If it not find a 'a', it prints only a new line
		write(1, "\n", 1);
	}
	// If it doesn't have 2 arguments, print a 'a' with a new line
	else
	   write(1, "a\n", 2);
}
```

## 0-aff_z

> Fácil **2/10**

Verificar se é válido usar void ao argv e argc

```c
#include <unistd.h>

int		main(int argc, char **argv)
{
	// Call the parameters and do nothing
	// If it doesn't call the parameters it gives compilation error
	(void)argc;
	(void)argv;

	// In all cases it will print a 'z' with a new line
	write(1, "z\n", 2);
}
```

## 1-ft_strlen

> Fácil **1/10**

1. Receber o array
2. Percorrer o array
3. Retornar o i

```c
#include <stdio.h>

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

int	main(void)
{
	char	*str = "Hello World!";
	int	lenght;
	
	lenght = ft_strlen(str);
	printf("String: %s\nLenght: %d\n", str, lenght);
}
```

## 1-ft_swap

> Fácil **2/10**

1. Receber inteiros
2. Criar variável temp/swap
3. Associar a a swap
4. A associar a B
5. B associar a Swap

```c
#include <stdio.h>

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
}
```

## 1-rev_print

> Fácil - Médio **3/10**

1. Receber string
2. Criar swap e last
3. Percorrer string recebida
4. Last = i - 1, pois array 0
5. Enquanto last >= 0
	1. Escreve posição last do array
	2. Last --
6. Fora do While, escrever \n
7. Returnar string

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

int	main(int argc, char **argv)
{
	// only calls the function if you have only 2 arguments
	if (argc == 2)

		// Send to print the argument in position 1
		ft_rev_print(argv[1]);
}
```

## 2-first_word

> Médio **4/10**

1. Receber argc e argc
2. Se for igual a 2, o argc, então faz o código 
3. Se não for, então, apenas escreve newline
4. Enquanto `array[1][i]` não for um espaço em branco `' '` ou um tab `\t` ou nulo `\0`, então escreve
5. Outro array, enquanto for um tab ou espaço em branco, então apenas incrementa `i`, para passar à frente 

```c
#include <unistd.h>

// deliver the program with the main
int		main(int ac, char **av)
{
	int i;

	i = 0;

	// only calls the function if you have only 2 arguments
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

> Médio **5/10**

1. Criar variáveis `i`, `last` e `temp`(esta precisa ser char, pois vai alocar chars do array)
2. Percorrer o array recebido, para saber quantos caracteres existem dentro
3. Criar variável `last` que é igual a `i` (última posição do array) menos 1 (Arrays em zero e tal)
4. Deixar `i` em 0, para voltar a percorrer o array, mas agora, para trocar os valores de lugar
5. While `last` é maior que `i` (enquanto o i, não chegar à última posição do array)
	1. `temp` é igual a `str[i]` (primeiro valor/posição do array)
	2. `str[i]` é igual a `str[last]` (passar último valor para o primeiro)
	3. `str[last]` é igual a `temp` (primeiro valor, para o final do array)
	4. Incrementados `i` e subtraímos `last` (ao tirar last, assim, a condição do while irá parar a meio, fazendo só a troca. Se continuasse, o swap iria ocorrer duas vezes, entregando o mesmo array)
6. Returnar `str`

```c
#include <stdio.h>

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

int	main(void)
{
	char	str[17] = "words and letters";

	printf("Regular String: %s\n", str);
	printf("Reversed String: %s\n", ft_strrev(str));
}
```


## 2-rot_13

> Médio - Precisa Atenção **4/10**

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

> Médio **4/10**

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

> Médio - Difícil **6/10**


1. Recebemos os argumentos na `main`
	1. Se forem 3 (nome do programa+dois argumentos) então rodamos o código 
2. Chamamos a função `inter` e as entregamos os argumentos recebidos 
3. Na função `inter` vamos percorrer, com dois `whiles`, cada carácter dos dois arrays recebidos
	1. A lógica é que verificamos o primeiro valor do primeiro array, com todos os demais valores do segundo array e só depois é que comparamos o segundo valor
4. Se nestas verificações, o valor no primeiro array for igual ao segundo valor do segundo, então vamos para uma segunda verificação, com um segundo if
5. Se `appeared_before` não devolver 1, então, passa a frente. Se devolver 0, escreve o carácter do primeiro array. 

```c
#include <unistd.h>

// check if the character has appeared before
int		appeared_before(char *str, char c, int pos)
{
	int i;

	i = 0;
	// checks even the position before the received Char
	while (i < pos)
	{
		// If Str[i] is the same as Char, returns true
		if (str[i] == c)
			return (1);
		i++;
	}
	// If it has not appeared before, the return is false
	return (0);
}
void	inter(char *s1, char *s2)
{
	int	i = 0;
	int	j;

	// runs the two strings index by index
	while (s1[i])
	{
		// 'J' always returns to the beginning 
		j = 0;
		while (s2[j])
		{
			// If what is in s1 is equal to s2
			if (s1[i] == s2[j])
			{
				// If the character didn't appear before, it is printed
				if (!appeared_before(s1, s1[i], i))
				{
					write(1, &s1[i], 1);
					
					// Get out of the current loop
					break ;
				}
			}
			j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	// only calls the function if you have only 3 arguments
	if (ac == 3)
		inter(av[1], av[2]);

	// Print the new line in the end
	write(1, "\n", 1);
}
```

## 3-last_word

```c
#include <unistd.h>

// deliver the program with the main
int main(int ac, char **av)
{
	int	i = 0;

	// only calls the function if you have only 2 arguments
	if (ac == 2)
	{
		// Count the string length
		while (av[1][i])
			i++;

		// positions 'i' in the last index
		i--;

		// At the end of the string, while it has space or tab, decrees the 'i'
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		
		// Runs the string until the last word begins
		while (i > 0 && (av[1][i] != ' ' && av[1][i] != '\t'))
			i--;

		// positions 'i' in the index that starts the word
		i++;

		// Until the end or space comes, the word is printed
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	// Print the new line in the end
	write(1, "\n", 1);
}
```

## 3-union

```c
#include <unistd.h>

int		appeared_before_in_other_string(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		// If Str[i] is the same as Char, returns true
		if (str[i] == c)
			return (1);
		i++;
	}

	// If it has not appeared before, the return is false
	return (0);
}

int		appeared_before(char *str, char c, int pos)
{
	int i;

	i = 0;

	// checks even the position before the received Char
	while (i < pos)
	{
		// If Str[i] is the same as Char, returns true
		if (str[i] == c)
			return (1);
		i++; 
	}

	// If it has not appeared before, the return is false
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		// If the character didn't appear before in the current string, it is printed
		if (!appeared_before(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		// If the character didn't appear before in the other string
		if (!appeared_before_in_other_string(s1, s2[i]))
		{
			// If the character didn't appear before in the current string, it is printed
			if (!appeared_before(s2, s2[i], i))
				write(1, &s2[i], 1);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	// only calls the function if you have only 3 arguments
	if (ac == 3)
		ft_union(av[1], av[2]);

	// Print the new line in the end
	write(1, "\n", 1);
}
```

## 3-wdmatch

```c
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;

	// While the string doesn't reach the null
	while (str[i])
	{
		// Each Char passed by the index "i" will be printed
		write(1, &str[i], 1);
		i++;
	}	
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	// While the string doesn't reach the null
	// the counter "i" will be increased
	while (str[i] != '\0')
		i++;

	// In the end the function returns the number of characters counted
	return (i);
}

int		main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int match = 0;

	// Check if there are exactly 3 arguments
	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				// if the char of argument 1 is equal to argument 2
				if (av[1][i] == av[2][j])
				{
					// The counter is increased
					match++;

					// Get out of the current loop
					break ;
				}
				j++;
			}
			i++;
		}
		// If the amount of match is equal to the length, print the string
		if (match == ft_strlen(av[1]))
			ft_putstr(av[1]);
	}
	// Print the new line in the end
	write(1, "\n", 1);
}
```

## 4-ft_atoi

1. Recebemos um array na função que estamos a criar
2. Dentro da função, vamos criar 3 variáveis.
	1. Resultado = 0
	2. Sinal = 1
	3. Index = 0
3. Para entregar, vamos precisar fazer 3 verificações
	1. A primeira é passar à frente os espaços em branco e similares.
		1. Para tal, fazemos um while que, apenas irá incrementar o `i` quando detetar um espaço em branco ou os chars entre 9 e 13
	2. Segunda passo é verificar os sinais de menos
		1. Fazemos um if que está à procura do sinal `-`
		2. Se o encontrar, então, fazemos `sinal *= -1` e também incrementamos o `i` para continuar o array
	3. Terceiro e último é fazer a verificação dos números
		1. Fazemos um while, que irá percorrer apenas se forem entre 0 e 9 e dentro dele fazemos
		2. `Resulto = resultado * 10 + (str[i] - '0')`
4. Por fim, damos return de resultado * sinal*
```c
#include <stdio.h>
#include <stdlib.h>

// the atoi of the exam is equal of the original, it isn't equal to the atoi of C04/ex03
// deliver only this function
int	ft_atoi(char *str)
{
	int	sum;
	int	i;
	int	sign;

	i = 0;
	sum = 0;

	// The signal starts by default as positive
	sign = 1;

	// while there are spaces or tabs go to the next character
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;

	// If it's a minus sign the value of the 'sign' is inverted and go to next char
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}

	// While the string has numbers, they will be added to sum
	while (str[i] >= '0' && str[i] <= '9')
	{
		// This formula receives the number that is in the index and adds a decimal place
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sign * sum);
}

int	main(void)
{
	char *n = "     -1234ab567";

	// The original atoi is in the Library <stdlib.h>
	printf("Or: %d\n", atoi(n));
	printf("My: %d\n", ft_atoi(n));
}
```

## 5-ft_range

```c
#include <stdlib.h>
#include <stdio.h>

int        ft_positive(int n)
{
    // If it is negative, change to positive
    if (n < 0)
        return (-n);
    return (n);
}

int    *ft_range(int start, int end)
{
    int        size;
    int        i;
    int        *tab;
    // 'size' receives the range between the start and the end
    size = ft_positive(end - start) + 1;

    // Memory allocation and check
    tab = (int *)malloc(sizeof(int) * size);
    if (tab == NULL)
        return (0);
    i = 0;

    // If Start is less than or equal to the end
    if (start <= end)
    {
        while (i < size)
        {
            // tab receives start + 1
            tab[i] = start + i;
            i++;
        }
    }
    // If Start is greater than end
    else if (start > end)
    {
        while (i < size)
        {
            // tab receives start - 1
            tab[i] = start - i;
            i++;
        }
    }
    return (tab);
}
 
int        main(void)
{
    int i = 0;
    int start = 0;
    int end = -3;
    int size = ft_positive(end - start) + 1;
    int *tab = ft_range(start, end);
    
    while (i < size)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}
```

## 6-ft_itoa

```c
#include <stdio.h>
#include <stdlib.h>

// Count the decimal places
int	ft_decimal_places(long n)
{
	int i = 0;

	// If it's negative, 'n' becomes positive and increases 'i'
	if (n < 0)
	{
		n *= -1;
		i++;
	}

	// while 'n' is bigger than 0, divides 'n' by 10
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

// convert a int to char and store it in a array
char	*ft_itoa(int nbr)
{
	int long	n;
	char	*str;
	int	i;
	
	// long int 'n' receives int 'nb'
	// to avoid the issues with the int min
	n = nbr;

	// 'I' receives the decimal places
	i = ft_decimal_places(n);
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	
	// The last position of the string receives the null
	str[i--] = '\0';

	// If 'n' is 0, the first position of the string gets '0' and returns
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}

	// If it's negative, the first position of the string receives '-' E 'n' becomes positive
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}

	// While 'n' is greater than 0, STR receives the 'n' module for 10
	while (n > 0)
	{
		str[i] = n % 10 + '0';

		// 'n' decreases a decimal place
		n /= 10;
		i--;
	}
	return (str);
}

int	main(void)
{
	int	n = -987564;
	int	i = 0;
	char	*str = ft_itoa(n);

	while (str[i])
	{	
		printf("str[%d] = [%c]\n", i, str[i]);
		i++;
	}
}
```

## 6-ft_split

```c
#include <stdio.h>
#include <stdlib.h>

// check if a character is a separator
int	is_separator(char c, char *sep)
{
	int	i;

	i = 0;
	// goes through all the characters of 'sep'
	while (sep[i])
	{
		// If it's any of the separators, the return is 1
		if (c == sep[i])
			return (1);
		i++;
	}

	// If not a separator the return is 0
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;

	// runs all the string
	while (str[i])
	{
		// If it's not a separate, 'words' is increased
		// if it's a separator, 'i' is increased (go to next char)
		if (!is_separator(str[i], sep))
		{
			words++;
			
			// While the string is not over and is not a separator, 'i' is increased
			while (str[i] && !is_separator(str[i], sep))
				i++;
		}
		else
			i++;
	}

	// returns the count of words
	return (words);
}

char	*word_splitter(char *str, char *sep)
{
	char	*word;
	int		i;

	i = 0;

	// Count the lenght of the word until it reachs the end and is not a separator
	while (str[i] && !is_separator(str[i], sep))
		i++;

	// allocate the memory to 'Word' in the size counted
	word = (char *) malloc(sizeof(char *) * (i + 1));
	if (word == NULL)
		return (NULL);

	// 'i' needs to receive 0
	i = 0;

	// While the string is not over and is not a separator
	// 'Word' receives what is in string
	while (str[i] && !is_separator(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';

	// Returns the splitted string
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;

	// 'Words' is a set of strings
	char	**words;

	i = 0;
	j = 0;

	// 'Words' receives memory allocation in the size of the words + 1
	words = (char **) malloc(sizeof(char *) * (count_words(str, charset) + 1));

	// If any of the strings is null, the return is null
	if (words == NULL || str == NULL || charset == NULL)
		return (NULL);

	// runs all the string
	while (str[i])
	{
		// If it's not a separate, 'words' receives the word splitted
		if (!is_separator(str[i], charset))
		{
			words[j] = word_splitter(&str[i], charset);

			// While the string is not over and is not a separator, 'i' is increased
			while (str[i] && !is_separator(str[i], charset))
				i++;
			
			// Go to the next index of Words
			j++;
		}

		// if it's a separator, 'i' is increased (go to next char)
		else
			i++;
	}

	// In the end Words need to receive 0
	words[j] = 0;
	return (words);
}
 
int	main(void)
{
	char	*str = "Words to.be/splitted*in@six";
	char	*sep = "./*@! ";
	char	**words = ft_split(str, sep);
	int i = 0;

	printf("Before: %s\nAfter: \n", str);
	while (words[i])
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
}
```




