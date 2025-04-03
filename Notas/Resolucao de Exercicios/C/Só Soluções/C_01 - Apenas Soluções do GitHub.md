# C_01 - Apenas Soluções do GitHub

## EX00

### Solução

```c
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
```

### Código de Teste

```c
//#include <stdio.h>

void	ft_ft(int *nbr)
{
	// This instruction tells the nbr pointer that the address must receive the value 42
	// This means that the variable n called on Main will now have the value 42
	*nbr = 42;
}

/* int	main(void)
{
	int n = 1;
	int *nbr = &n;

	printf("Before ft_ft: \n");
	printf("Variable 'nbr' points to adress %p that has the value %d stored\n", &n, n);
	printf("Pointer 'nbr' points to the same adress %p that has the value %d stored\n", nbr, *nbr);
	ft_ft(nbr);
	printf("\n");
	printf("After ft_ft: \n");
	printf("Pointer 'nbr' remains pointing to adress %p, but now that has the value %d stored\n", nbr, *nbr);
	printf("Now 'n' has the value %d stored\n", n);
} */
```

## EX01

### Solução

```c
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
```

### Código de Teste

```c
//#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	// With this instruction all the pointers who are pointing to 
	// the same address will now point to the value 42
	*********nbr = 42;
}
/* 
int	main(void)
{
	int	number = 1024;
	int	*ptr1 = &number;
	int	**ptr2 = &ptr1;
 	int	***ptr3 = &ptr2;
 	int	****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
 	int	******ptr6 = &ptr5;
 	int	*******ptr7 = &ptr6;
 	int	********ptr8 = &ptr7;
 	int	*********ptr9 = &ptr8;

	printf("'Number' has the adress %p and the value %d\n", &number, number);
	printf("ptr1 points to same adress of 'Number'%p and has the same value %d\n", ptr1, *ptr1);
	printf("ptr9 points to a different adress of 'Number'%p but the adresses are connected. It has the same value %d\n", ptr9, *********ptr9);
	ft_ultimate_ft(ptr9);
	printf("\n");
	printf("After ft_ultimate_ft: \n");
	printf("Pointer 'ptr9' remains pointing to adress %p, but now that has the value %d stored\n", ptr9, *********ptr9);
	printf("'Number' remains pointing to adress %p, but now that has the value %d stored\n", &number, number);
} */
```

## EX02

### Solução

```c

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
```

### Código de Teste

```c
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	// This instruction exchanges the values to which pointers are pointing
	temp = *a;
	*a = *b;
	*b = temp;
}
/* 
int	main(void)
{
	int	v1 = 15;
	int	v2 = 35;
	int	*a = &v1;
	int	*b = &v2;
	
	printf("Before ft_swap: \n");
	printf("Pointer 'a' points to adress %p that has the value %d stored\n", a, *a);
	printf("Pointer 'b' points to adress %p that has the value %d stored\n", b, *b);
	ft_swap(a, b);
	printf("\n");
	printf("After ft_swap: \n");
	printf("Pointer 'a' remains pointing to adress %p, but now that has the value %d stored\n", a, *a);
	printf("Pointer 'b' remains pointing to adress %p, but now that has the value %d stored\n", b, *b);
} */
```

## EX03

### Solução

```c

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
```

### Código de Teste

```c
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* 
int	main(void)
{
	int a = 45;
	int b = 5;
	int	v1 = 0;
	int	v2 = 0;
	int	*div = &v1;
	int	*mod = &v2;

	printf("Before ft_div_mod: \n");
	printf("Pointer 'div' points to adress %p that has the value %d stored\n", div, *div);
	printf("Pointer 'mod' points to adress %p that has the value %d stored\n", mod, *mod);
	ft_div_mod(a, b, div, mod);
	printf("\n");
	printf("After ft_div_mod: \n");
	printf("Pointer 'div' remains pointing to adress %p, but now that has the value %d stored\n", div, *div);
	printf("Pointer 'mod' remains pointing to adress %p, but now that has the value %d stored\n", mod, *mod);
} */
```

## EX04

### Solução

```c

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
```

### Código de Teste

```c
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
/* 
int	main(void)
{
	int	v1 = 15;
	int	v2 = 3;
	int	*a = &v1;
	int	*b = &v2;

	printf("Before ft_ultimate_div_mod: \n");
	printf("Pointer 'a' points to adress %p that has the value %d stored\n", a, *a);
	printf("Pointer 'b' points to adress %p that has the value %d stored\n", b, *b);
	ft_ultimate_div_mod(a, b);
	printf("\n");
	printf("After ft_ultimate_div_mod: \n");
	printf("Pointer 'a' remains pointing to adress %p, but now that has the value %d stored\n", a, *a);
	printf("Pointer 'b' remains pointing to adress %p, but now that has the value %d stored\n", b, *b);

} */
```

## EX05

### Solução

```c
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}	
}
```

### Código de Teste

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
/* 
int	main(void)
{
	char	*str = "Print the string";
	
	ft_putstr(str);
} */
```

## EX06

### Solução

```c

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	
	while (str[i] != '\0')
		i++;

	return (i);
}
```

### Código de Teste

```c
//#include <stdio.h>

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
/* 
int	main(void)
{
	char	*str = "Hello World!";
	int	lenght;
	
	lenght = ft_strlen(str);
	printf("String: %s\nLenght: %d\n", str, lenght);
} */
```

## EX07

### Solução

```c

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;

	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;

		i++;
		size--;
	}
}
```

### Código de Teste

```c
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;

	// The Size Value is decreased to the table index to be in the last position
	size--;
	while (i < size)
	{
		// This instruction will exchange the value in the first position with the last
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;

		//After the exchange the index goes to the second position at both ends
		i++;
		size--;
	}
}

int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size = 10;
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("Array before: \n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	printf("\nArray after: \n");
	ft_rev_int_tab(tab, size);
	while (j < size)
        {
		printf("%d ", tab[j]);
		j++;
	}
} 
```

## EX08

### Solução

```c

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] <= tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}	
} 
```

### Código de Teste

```c
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	// Two whiles with two counters will compare each position of the array with each other
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			// If a larger number is found in position j, the exchange is made
			// In the end the smaller numbers are in the beginning and the largest at the end
			if (tab[i] <= tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}	
}
/* 
int	main(void)
{
	int	tab[10] = {5, 3, 2, 9, 4, 8, 0, 7, 1, 6};
	int	size = 10;
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("Array before: \n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	printf("\nArray after: \n");
	ft_sort_int_tab(tab, size);
	while (j < size)
        {
		printf("%d ", tab[j]);
		j++;
	}
} */ 
```