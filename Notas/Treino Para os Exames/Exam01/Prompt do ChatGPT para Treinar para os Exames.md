# Prompt do ChatGPT para Treinar para os Exames


Com base neste enunciado:


```
Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.
```

E agora, com base neste código:

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

Por favor, explica-me para que servem os dois primeiros while loops.
