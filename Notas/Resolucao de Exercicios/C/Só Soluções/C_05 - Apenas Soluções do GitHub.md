# C_05 - Apenas Soluções do GitHub


## EX00

```c
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;

	// The result for negative factorial is zero
	if (nb < 0)
		return (0);

	// If 'nb' is zero, do not enter the loop. Returns the result that is 1
	// While 'nb' is greater than zero, result gets the result * the current nb
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("Fatorial de -1 = %d\n", ft_iterative_factorial(-1));
	printf("Fatorial de 0 = %d\n", ft_iterative_factorial(0));
	printf("Fatorial de 1 = %d\n", ft_iterative_factorial(1));
	printf("Fatorial de 5 = %d\n", ft_iterative_factorial(5));
}
```

## EX01

```c


int	ft_recursive_factorial(int nb)
{
	// If it is negative, returns 0
	if (nb < 0)
		return (0);

	// If it's 0 or 1, returns 1
	if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("Fatorial de -1 = %d\n", ft_recursive_factorial(-1));
	printf("Fatorial de 0 = %d\n", ft_recursive_factorial(0));
	printf("Fatorial de 1 = %d\n", ft_recursive_factorial(1));
	printf("Fatorial de 5 = %d\n", ft_recursive_factorial(5));
}
```

## EX02

```c
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	// A number raised to negative is zero
	if (power < 0)
		return (0);

	// Any number raised to 0 is 1
	if (power == 0)
		return (1);
	
	// The power is the number multiplied by itself certain times
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

#include <stdio.h>
 
int	main(void)
{
	printf("Power of 2 ^ -1 = %d\n", ft_iterative_power(2, -1));
	printf("Power of 0 ^ 0 = %d\n", ft_iterative_power(0, 0));
	printf("Power of 3 ^ 1 = %d\n", ft_iterative_power(3, 1));
	printf("Power of -3 ^ 3 = %d\n", ft_iterative_power(-3, 3));
}
```

## EX03

```c
int	ft_recursive_power(int nb, int power)
{
	// A number raised to negative is zero
	if (power < 0)
		return (0);
	
	// Any number raised to 0 is 1
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}

#include <stdio.h> 

int	main(void)
{
	printf("Power of 2 ^ -1 = %d\n", ft_recursive_power(2, -1));
	printf("Power of 0 ^ 0 = %d\n", ft_recursive_power(0, 0));
	printf("Power of 3 ^ 1 = %d\n", ft_recursive_power(3, 1));
	printf("Power of -3 ^ 3 = %d\n", ft_recursive_power(-3, 3));
}
```

## EX04

```c
// This function says the value of Fibonacci by the past index
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>

int	main(void)
{
	printf("The negative fibonacci is %d\n", ft_fibonacci(-5));
	printf("The 0º fibonacci is %d\n", ft_fibonacci(0));
	printf("The 1º fibonacci is %d\n", ft_fibonacci(1));
	printf("The 2º fibonacci is %d\n", ft_fibonacci(2));
	printf("The 3º fibonacci is %d\n", ft_fibonacci(3));
	printf("The 4º fibonacci is %d\n", ft_fibonacci(4));
	printf("The 5º fibonacci is %d\n", ft_fibonacci(5));
	printf("The 6º fibonacci is %d\n", ft_fibonacci(6));
	printf("The 7º fibonacci is %d\n", ft_fibonacci(7));
	printf("The 8º fibonacci is %d\n", ft_fibonacci(8));
	printf("The 9º fibonacci is %d\n", ft_fibonacci(9));
	printf("The 10º fibonacci is %d\n", ft_fibonacci(10));
}
```

## EX05

```c

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;

	// For this exercise is considered only the rational square root
	// negative numbers, zero and fractional numbers the return will be 0
	if (nb <= 0)
		return (0);

	// checks the nearest numbers to reach the square root of a number
	while (i * i < nb)
		i++;

	// If the number multiplied by itself is equal to 'nb'
	// It's a rational square root
	if (i * i == nb)
		return (i);
	else
		return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("Square Root of 0: %d\n", ft_sqrt(0));
	printf("Square Root of -2: %d\n", ft_sqrt(-2));
	printf("Square Root of 4: %d\n", ft_sqrt(4));
	printf("Square Root of 10: %d\n", ft_sqrt(10));
	printf("Square Root of 25: %d\n", ft_sqrt(25));
}
```

## EX06

```c
// prime numbers are numbers that are only divisible by themselves
int	ft_is_prime(int nb)
{
	int	i;

	// negative numbers, 0 and 1 are not prime
	if (nb <= 1)
		return (0);

	// The counter receives the smallest prime
	i = 2;

	// check if 'i' is less than or equal to the square root of nb
	// Any number larger than the square root cannot be an 'nb' divider.
	while (i <= nb / i)
	{
		// If the rest of the division of 'nb' by 'i' for 0, this number is not prime
		if (nb % i == 0)
			return (0);
		i++;
	}
	// If the loop ends without finding a divider, 'nb' is prime
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("-7 is prime? %d\n", ft_is_prime(-7));
	printf("0 is prime? %d\n", ft_is_prime(0));
	printf("2 is prime? %d\n", ft_is_prime(2));
	printf("3 is prime? %d\n", ft_is_prime(3));
	printf("5 is prime? %d\n", ft_is_prime(5));
	printf("6 is prime? %d\n", ft_is_prime(6));
	printf("23 is prime? %d\n", ft_is_prime(23));
}
```

## EX07

```c
// We use the function created in the previous exercise
// To check if 'nb' is prime or not
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	// While 'nb' is not prime, 'nb' is increased
	while (ft_is_prime(nb) == 0)
		nb++;

	// In the end, only a prime number is returned
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	printf("What is the next prime of -3? %d\n", ft_find_next_prime(-3));
	printf("What is the next prime of 6? %d\n", ft_find_next_prime(6));
	printf("What is the next prime of 13? %d\n", ft_find_next_prime(13));
	printf("What is the next prime of 25? %d\n", ft_find_next_prime(25));
	printf("What is the next prime of 84? %d\n", ft_find_next_prime(84));
}
```

## EX08

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// function that prints the founded solution
void	ft_print_solution(int *chessboard)
{
	int	i;

	i = 0;
    // prints the position of each queen on the board
	while (i < 10)
		ft_putchar(chessboard[i++] + '0');
	ft_putchar('\n');
}

// Check if two queens can attack each other in a given position
int	attack_possibility(int *chessboard, int p)
{
	int	i;

	i = 0;
    // Checks all previous positions
	while (i < p)
	{
        // check if there are two queens in the same column
		if (chessboard[i] == chessboard[p] && i != p)
			return (1);
		if (i != p)
		{
            // Check if there are two queens in the same diagonal
            // If so, the return is 1
			if (chessboard[i] == chessboard[p] - (p - i)
				|| chessboard[i] == chessboard[p] + (p - i))
				return (1);
		}
		i++;
	}
    // return 0 when there are no possibility of attacks between queens
	return (0);
}

void	ft_ten_queens_puzzle_recursive(int chessboard[], int p, int *solutions)
{
	int	i;

	i = 0;
    // checks if all queens have been positioned
    // If so, the solution is printed
	if (p == 10)
	{
		ft_print_solution(chessboard);

        // increases the number of founded solutions
		(*solutions)++; 
	}
	else
	{
        // Put the queens in all columns without chance for attacks
		while (i <= 9)
		{
            // assign the position to the queen
			chessboard[p] = i;

            // Check the possibilities of attacks between the queens
            // only advances to the next position when there is no possibility of attack
			if (!attack_possibility(chessboard, p))
				ft_ten_queens_puzzle_recursive(chessboard, p + 1, solutions);
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
    // array to store the positions of the queens
	int	chessboard[10];
	int	solutions;

    // number of solutions found initially is zero
	solutions = 0;

    // Find all possible solutions
    // 'Solutions' is sent as a pointer
	ft_ten_queens_puzzle_recursive(chessboard, 0, &solutions);

    // Returns the total number of solutions found
	return (solutions);
}

#include <stdio.h>

int main()
{
    printf("Solutions founded: %d\n", ft_ten_queens_puzzle());
}
```