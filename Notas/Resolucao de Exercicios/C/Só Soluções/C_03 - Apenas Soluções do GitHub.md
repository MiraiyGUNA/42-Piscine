# C_03 - Apenas Soluções do GitHub

https://litter.catbox.moe/8d1l8j.tar

## EX00

```c
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	// while the two strings are equal and S1 does not reach the end
	while (s1[i] == s2[i] && s1[i])
	{
		// While they are the same, the counter is added
		i++;
	}
	// In the end, if they are equal or different, the value will be returned
	return (s1[i] - s2[i]);
}
 
int	main(void)
{
	char	*s1 = "word";
	char	*s2 = "Word";

	// This line calls the original function to verify that the output is the same
	printf("Or: %d\n", strcmp(s1, s2));
	printf("My: %d\n", ft_strcmp(s1, s2));
}
```

## EX01

```c
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	// while the counter is less than the passed number
	while (i < n)
	{
		// If s1 is different from S2 or S1 reaches the end
		// The difference between the two is returned
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	// If the two are equal the return is zero
	return (0);
}
 
int	main()
{
	char s1[] = "word";
	char s2[] = "Word";
	int n = 2;

	printf("Or: %d\n", strncmp(s1, s2, n));
	printf("My: %d\n", ft_strncmp(s1, s2, n));
}
```

## EX02

```c
#include <stdio.h>

// This function will concatenate the two strings
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	// count dest until reach the end
	while (dest[i] != '\0')
		i++;
	j = 0;
	// until the end of src, dest receive src
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	// In the end dest receives the null
	dest[i] = '\0';
	return (dest);
}
 
int	main(void)
{
	char	dest[10] = "dest";
	char	src[10] = "src";

	ft_strcat(dest, src);
	printf("String: %s\n", dest);
}
```

## EX03

```c
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	// while the SRC counter is smaller than the number
	// and SRC doesn't reach the end
	while (j < nb && src[j] != '\0')
	{
		// DEST receives the character of SRC
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[10] = "dest";
	char	src[10] = "src";
	int	n = 2;

	ft_strncat(dest, src, n);
	printf("%s", dest);
}
```

## EX04

```c
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	// If to_find is empty, the string is returned whole
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		// Looking for the first correspondence between STR and TO_FIND
		// while they are equal the 'j' counter is added
		// 'i' remains with the value of the first correspondence
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			// If 'j' next position is equal to the null
			// Is returned the string from position of 'i'
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}	
		++i;
	}	
	return (0);
}

int	main(void)
{
	char *str = "Try to find this part of the text";
	char *to_find = "to find";

	printf("Returned: %s\n", ft_strstr(str, to_find));
}
```

## EX05

```c
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// This function returns the lenght of the strings that will be concatenated
// It also changes the destination string
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;
	unsigned int	sum;

	i = 0;
	sum = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	// If the past value is higher than dest
	if (size > d)
		// Lengths receives the SRC and dest lengths
		sum = d + s;
	else
		// Otherwise it receives the SRC lenght plus the size
		sum = s + size;
	
	// While SRC doesn't reach the end and size is larger than dest + 1
	while (src[i] && size > (d + 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	// The last position of the size is stored for the null
	dest[d] = '\0';
	return (sum);
}

int	main(void)
{
	char	dest[10] = "dest";
	char	src[10] = "src";
	int	size = 6;

	printf("Dest Before: %s\n", dest);
	printf("Return of strlcat: %d\n", ft_strlcat(dest, src, size));
	printf("Dest after: %s\n", dest);
}
```