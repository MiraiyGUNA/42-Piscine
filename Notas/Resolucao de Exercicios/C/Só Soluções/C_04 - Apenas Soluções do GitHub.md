# C_04 - Apenas Soluções do GitHub

https://litter.catbox.moe/llr47u.tar

## EX00

```c
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

#include <stdio.h>

int	main(void)
{
	char	*str = "letters";

	printf("The string %s has a lenght of %d\n", str, ft_strlen(str));
}
```

## EX01

```c
void	ft_putstr(char *str)
{
	int	i;

	i = 0;

	// While the string doesn't reach the null
	while (str[i] != '\0')
	{
		// Each Char passed by the index "i" will be printed
		write(1, &str[i], 1);
		i++;
	}
}

#include <unistd.h>

int	main(void)
{
	char	*str = "Print the string";
	
	ft_putstr(str);
}
```

## EX02

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


// Function to print an integer to stdout
void	ft_putnbr(int nb)
{
	long int	n;

	// long int 'n' receives int 'nb'
	// to avoid the issues with the int min
	n = nb;
	
	// If the 'n' is negative
	// write a minus sign and make it positive
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}

	// If 'n' is a single digit between 0 and 9. write it.
	// The plus '0' convert the int to char
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');

	// If 'n' is more than one digit
	if (n > 9)
	{
		// Recursively print the quotient by dividing the number by 10
		ft_putnbr(n / 10);
		
		// Recursively print the remainder by computing the number modulo 10
		ft_putnbr(n % 10);
	}
}

int	main(void)
{
	write(1, "Print a positive number: ", 26);
	ft_putnbr(42);
	write(1, "\nPrint a negative number: ", 26);
	ft_putnbr(-42);
	write(1, "\nPrint zero: ", 13);
	ft_putnbr(0);
	write(1, "\nPrint the max value of int: ", 29);
	ft_putnbr(2147483647);
	write(1, "\nPrint the min value of int: ", 29);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
}
```

## EX03

```c


int	ft_atoi(char *str)
{
	int	sum;
	int	i;
	int	sign;

	i = 0;
	sum = 0;

	// The signal starts by default as positive
	sign = 1;

	// while there are spaces or tabs
	// the 'i' is increased to go to the next character
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;

	// while there are '+' and '-', 'i' is increased
	while (str[i] == '-' || str[i] == '+')
	{
		// If it's a minus sign
		// the value of the 'sign' is inverted
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	// after the spaces and signs of + and -
	// While the string has numbers, they will be added to sum
	while (str[i] >= '0' && str[i] <= '9')
	{
		// This formula receives the number that is in the index and adds a decimal place
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	// In the end, if the number of '-' is even, the number will be positive
	// If the number of '-' is odd, the number will be negative
	return (sign * sum);
}

#include <stdio.h>

int	main(void)
{
	char *n = " ---+--+1234ab567";

	printf("My: %d\n", ft_atoi(n));
}
```

## EX04

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	// If the base is less than 2, returns 0
	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		
		// If it's found signs of + or -
		// or non-printable characters, returns 0
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < 32 || base[i] > 126)
			return (0);

		// check if the base has any repeated character
		// If there is any, the return is 0
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	// If there is no problem, the return is 1
	return (1);
}

//This function will convert a decimal number to decimal or other bases and print it
void	ft_putnbr_base(int nbr, char *base)
{
	char	box[32];
	long	n;
	int		size;
	int		i;

	// Call the function to check the past base
	// If the return on the function is 0, the program finish
	if (!ft_check_base(base))
		return ;
	
	// counts the size of the base
	size = ft_strlen(base);

	// long n avoid the issues with the int min
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	i = 0;

	while (n > 0)
	{
		// Array Box receives the converted values of 'n' to the base
		// This formula of 'n' module size will find the correct number at the base
		box[i] = base[n % size];
		n = n / size;
		i++;
	}

	// The values stored in box were reversed
	// This repetition will print what is in the box
	// starting from last position to the first
	while (--i >= 0)
		ft_putchar(box[i]);
}

int	main(void)
{
	int	n = 42;
	char	*hex = "0123456789abcdef";
	char	*oct = "012345678";
	char	*dec = "0123456789";
	char	*bin = "01";

	write(1, "decimal to decimal: ", 20);
	ft_putnbr_base(n, dec);
	write(1, "\ndecimal to binary: ", 20);
	ft_putnbr_base(n, bin);
	write(1, "\ndecimal to octal: ", 20);
	ft_putnbr_base(n, oct);
	write(1, "\ndecimal to hexadecimal: ", 26);
	ft_putnbr_base(n, hex);
	write(1, "\n", 1);

}
```

## EX05

```c
int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	// If the beginning of the base is null, returns 0
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		// If there are non-printable characters or signs of - and +, returns 0
		if (str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;

		// Check if there are repeated character
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}

	// Returns the size of the base
	return (i);
}

int	ft_base_match(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		// If the past Char is the same as the base, returns the 'i'
		if (c == base[i])
			return (i);
		i++;
	}
	// If the past char is the null of the string, the return will be -1
	return (-1);
}

int	ft_pre_digits(char *str, int *ptr_sign)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	// Check the spaces and increased 'i'
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;

	// checks the signs of + and - and increases the 'i'
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	// Change the value of sign in ft_atoi_base through the pointer ptr_sign
	*ptr_sign = sign;

	// In the end, returns the lenght from spaces and signs
	return (i);
}

// converts any base to decimal
int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		sum;
	int		current;
	int		base_size;

	sum = 0;
	sign = 1;

	// receives the base lenght or receives 0
	base_size = ft_check_base(base);

	// If the base length is less than 2
	// or the base check returns zero, the return will be zero
	// Otherwise the conversions are made
	if (base_size >= 2)
	{
		// 'i' receives lenght from pre digits
		i = ft_pre_digits(str, &sign);

		// receives the first correspondence of the base
		current = ft_base_match(str[i], base);

		// as long as there is correspondence
		while (current != -1)
		{
			// This formula converts the bases to decimal
			sum = (sum * base_size) + current;
			i++;

			// Current receives ft_base_match from the next Index
			current = ft_base_match(str[i], base);
		}
		return (sign * sum);
	}
	return (0);
}

#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--10", "0123456789"));
	printf("%d\n", ft_atoi_base(" --101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}
```