#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n) //custom implementation of strncpy
//The asterisk (*) indicates that dest and src are pointers to character arrays (strings[])
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n) // copy characters from 'src' to 'dest' until one of the followin conditions meet:
		// 1. the current character in 'src' is the null terminator ('\0') which indicates the end of the string
		// 2. 'i' becomes equal to or greater than 'n', which means we've copied 'n' characters
	{
		dest[i] = src[i]; //copy the character from 'src' to 'dest'
		i++; //move to the next character in both 'src' and 'dest'
	}
	while (i < n)
	{
		// if we haven't copied 'n' characters yet but have reached the end of 'src', fill the remaining space in 'dest' with null terminators ('\0').
		dest[i] = '\0'; //fill 'dest' with null terminators
		i++; //move to the next position in 'dest'
	}
	return (dest);
}

int	main()
{
	char src[] = "Hello"; //declare and initialize source string 'src'
	char dest[] = "World1"; //declare and initialize destination string 'dest'
	char dest1[] = "World2"; //declare and initialize another destinaion string 'dest1'

	printf("%s", ft_strncpy(dest, src, 3)); //copy the first 3 characters of 'src' to 'dest' using ft_strncpy
	printf("\n%s", strncpy(dest1, src, 3)); //copy the first 3 characters of 'src' to 'dest1' using standard strncpy
	printf("\n%s", ft_strncpy(dest, src, 5)); //copy the first 5 characters of 'src' to 'dest' using ft_strncpy
	printf("\n%s", strncpy(dest1, src, 5)); //copy the first 5 characters of 'src' to 'dest1' using standard strncpy
	printf("\n%s", ft_strncpy(dest, src, 7)); //copy the first 7 characters of 'src' to 'dest' using ft_strncpy
	printf("\n%s", strncpy(dest1, src, 7)); //copy the first 7 characters of 'src' to 'dest1' using standard strncpy
	//standard strncpy = a function in C used for copying characters from one string to another. it stands for "string copy with max length".
}
