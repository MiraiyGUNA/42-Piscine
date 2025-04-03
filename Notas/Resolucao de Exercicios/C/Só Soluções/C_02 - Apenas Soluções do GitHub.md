# C_02 - Apenas Soluções do GitHub

https://litter.catbox.moe/ss22d1.tar

## EX00

```c
#include <stdio.h>

// This function will copy the content from one string to another, including the null
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	// While 'src' doesn't reach the end
	while (src[i] != '\0')
	{
		//'dest' receives the character that is in 'src'
		dest[i] = src[i];
		i++;
	}
	// In the end 'dest' receives the null of 'src'
	dest[i] = src[i];

	//'dest' is returned
	return (dest);
}

int	main(void)
{
	char	dest[] = "Dest";
	char	src[] = "Source";

	printf("dest before: %s\n", dest);
	ft_strcpy(dest, src);
	printf("dest after: %s\n", dest);
}
```

## EX01

```c
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	// while src is not over and the counter is smaller than n
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	// If the N is greater than dest, it's necessary to put the null in all the remaining indices
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	dest[] = "######";
	char	src[] = "Source";
	int	n = 2;
	
	printf("dest before: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("dest after: %s\n", dest);
}
```

## EX02

```c
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// If STR is not between 'a' and 'z' or between 'a' and 'z' the return is 0
		// the exclamation point before conditions means NOT
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	// If there is no correspondence without alpha, the return is 1
	return (1);
}

int	main(void)
{
	char	*str1 = "T stndo";
	char	*str2 = "Testndo";

	printf("%s is alpha? %d\n", str1, ft_str_is_alpha(str1));	
	printf("%s is alpha? %d\n", str2, ft_str_is_alpha(str2));	
}
```

## EX03

```c
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// If STR is not between '0' and '9' the return is 0
		if (!((str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	// If there is no correspondence without numbers, the return is 1
	return (1);
}
 
int	main(void)
{
	char	*str1 = "012356789";
	char	*str2 = "o12356789";

	printf("%s is numeric? %d\n", str1, ft_str_is_numeric(str1));	
	printf("%s is numeric? %d\n", str2, ft_str_is_numeric(str2));
} 
```

## EX04

```c
// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// If STR is not between 'a' and 'z' in lowercase the return is 0
		if (!((str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str1 = "wordsandletters";
	char	*str2 = "wordsandlEtters";

	printf("%s is lowercase? %d\n", str1, ft_str_is_lowercase(str1));	
	printf("%s is lowercase? %d\n", str2, ft_str_is_lowercase(str2));
} 
```

## EX05

```c
// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// If STR is not between 'A' and 'Z' in uppercase the return is 0
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str1 = "WORDSANDLETTERS";
	char	*str2 = "WORDSANDlETTERS";

	printf("%s is uppercase? %d\n", str1, ft_str_is_uppercase(str1));	
	printf("%s is uppercase? %d\n", str2, ft_str_is_uppercase(str2));
}
```

## EX06

```c
// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// If STR is not between 32 and 126 in the ASCII Table the return is 0
		// The printable characters range from 32 ' ' to 126 '~'
		if (!((str[i] >= 32 && str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str1 = "aB3/!'.;Ko+";
	char	*str2 = "aB3/!'.;Ko±";

	printf("%s is printable? %d\n", str1, ft_str_is_printable(str1));	
	printf("%s is printable? %d\n", str2, ft_str_is_printable(str2));
}
```

## EX07

```c
// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// If STR is between 'a' and 'z' lowercase
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			// STR in the index position will receive itself less 32
			// 32 It's the difference in the ASCII table between the letter lowercase and uppercase
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
 
int	main(void)
{
	char	str[] = "all is lowercase";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strupcase(str));
}
```

## EX08

```c
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		// If STR is between 'A' and 'Z' uppercase
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			// STR in the index position will receive itself more 32
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "ALL IS UPPERCASE";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strlowcase(str));
}
```

## EX09

```c
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	// Let's call the function we created in the previous exercise
	// Calling the Lowercase function will transform all uppercase characters into lowercase
	ft_strlowcase(str);

	// If the first character is lowercase, it will pass to uppercase
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		// If the character before the current is not number or letters
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			// with the previous condition and the current character is lowercase
			// The current character is passed to uppercase
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "OLA, tudo BEM? 42palavras QUARENTA-e-duas; cinquenta+E+UM";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strcapitalize(str));
}
```

## EX10

```c
#include <stdio.h>

unsigned int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//This function will return the SRC Lenght
// and will add SRC to DEST according to the past size
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		// While SRC doesn't reach the end and the counter is less than size less one
		// Size less one to be able to receive the null
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	// Returns the SRC Lenght
	return (ft_lenght(src));
}

int	main(void)
{
	char	src[] = "letters";
	char	dest[11];
	int	n = 6;

	printf("src: %s\nlenght returned: %d\ndest: %s\n", src, ft_strlcpy(dest, src, n), dest);
}
```

## EX11

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_xdigit(unsigned char c)
{
	char	*xdigit;

	// Hexadecimal base
	xdigit = "0123456789abcdef";

	// the division and the module find the character corresponding
	// to the past in the hexadecimal base and print it
	ft_putchar(xdigit[c / 16]);
	ft_putchar(xdigit[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		// If this is less than 32 or equal to 127
		// that means non-printable 
		if (str[i] < ' ' || str[i] == 127)
		{
			// Two backslashes to be able to print 1
			ft_putchar('\\');
			// Call the function xdigit to transform the current character into hexadecimal
			ft_xdigit(str[i]);
		}
		else
			// If it's different from non-propriable, the character is printed
			ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char *str = "Ola\nesta bem?";
	ft_putstr_non_printable(str);
}
```

## EX12

```c
#include <unistd.h>

void	ft_putchar(char c, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		write(1, &c, 1);
		i++;
	}
}

void	ft_xdigit(unsigned long long nb, int check)
{
	char	*xdigit;

	xdigit = "0123456789abcdef";

	// When the number that is passed by the ft_print_data function
	// is lower than the base, the value to be printed is '0'
	if (nb < 16 && check == 1)
		ft_putchar('0', 1);

	// If it's larger than the base, it divides and module until it can print the number
	if (nb >= 16)
	{
		ft_xdigit(nb / 16, 0);
		ft_xdigit(nb % 16, 0);
	}
	else
		ft_putchar(xdigit[nb], 1);
}

void	ft_print_addr(unsigned long long addr)
{
	unsigned long long	tmp;
	int					i;

	// This temporary variable is created so as not to change the value of ADDR
	tmp = addr;
	i = 1;

	// This block serves to print the zeros at the beginning of the address
	while (i++ < 15)
	{
		if (tmp < 16)
			ft_putchar('0', 1);
		tmp /= 16;
	}
	// After the zeros are printed, the rest of the address is sent for printing
	ft_xdigit(addr, 0);
}

void	ft_print_data(unsigned char *c, int size)
{
	int		i;

	i = -1;
	while (i++ < 16)
	{
		// The space will only be printed when the counter is even
		if (i % 2 == 0)
			ft_putchar(' ', 1);
		if (i < size)
		{
			// sends the character to position I to be converted to hexadecimal
			ft_xdigit((unsigned long long)*(c + i), 1);
		}
		// When it's on the last line while 'i'
		// is different from column 16, spaces will be printed		
		else if (i != 16)
			ft_putchar(' ', 2);
	}
	i = -1;

	// This block prints the text that contains the string
	while (i++ < size - 1)
	{
		// If it's a non-pritable character, a dot is printed in place
		if (*(c + i) <= 31 || *(c + i) >= 127)
			ft_putchar('.', 1);
		else
			ft_putchar(*(c + i), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	columns;

	i = 0;
	// make the account of how many lines will be needed
	while (i * 16 < size)
	{
		// count how many columns will be needed in each line
		// The value is less than 16 in the last line
		if (i < size / 16)
			columns = 16;
		else
			columns = size % 16;
		
		// This function will print the address
		// The address is sent as long long
		// i * 16 is the position of the string in the index that starts the line
		ft_print_addr((unsigned long long)addr + (i * 16));
		ft_putchar(':', 1);

		// This function will print the columns and the text
		// i * 16 is the position of the string in the index that starts the line
		ft_print_data(addr + (i * 16), columns);
		ft_putchar('\n', 1);
		i++;
	}
	return (addr);
}

int main()
{
	char *str = "Hello W\1rld! This is a t\2st to print th\1 memory addr\2ss";
	int	size = 0;

	while (str[size])
		size++;
	ft_print_memory(str, size);
}
```