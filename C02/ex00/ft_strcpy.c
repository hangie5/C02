#include <stdio.h> //this header provides functions and macros for performing input and output operations. mainly used for printf
#include <string.h> //this header provides functions and macros for various string manipulations. mainly used for any functions starting with str
//for example strcpy, strlen, strcat etc.

char	*ft_strcpy(char *dest, char *src) //function to copy the content of one string (src) to another (dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0') //checks whether the character at the current position 'i' in the character array 'src' is not equal to the null terminiator '\0'
		//src[i] accesses the character at the index 'i' in the array 'src'. 
		//a string is an array of characters amd each character in the array is accessed using an index.
		//'\0' is the null terminator character. the null terminator is used to mark the end of a string. the character has the ASCII value 0.
	{
		dest[i] = src[i]; //this line is copying the character at index 'i' from the 'src' string to the corresponding index 'i'
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char src[] = "lol";
	char src1[] = "lol";
	char dest[] = "Wo";
	char dest1[] = "Wo";
	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", strcpy(dest1, src1));
}
