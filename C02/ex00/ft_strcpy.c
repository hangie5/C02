#include <stdio.h> //this header provides functions and macros for performing input and output operations. mainly used for printf
#include <string.h> //this header provides functions and macros for various string manipulations. mainly used for any functions starting with str
//for example strcpy, strlen, strcat etc.

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
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
