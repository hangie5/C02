#include <stdio.h>

int	ft_str_is_alpha(char *str) //define a function called ft_str_is_alpha that takes a pointer to a character (string) as an argument
{
	int	i;

	i = 0;
	if (str[i] == '\0' ) //check if the first character of the string is the null termiator (empty string)
	{
		return (1); //if it is, return 1 (indicating that the string is alphabetical)
	}
	while (str[i] != '\0') //start a loop that continues until the end of the string (null terminator)
	{
		if ((str[i] >= 'A' && str [i] <= 'Z')
			|| (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}	
	return (1);
}
int	main()
{
	printf("%d", ft_str_is_alpha("abcdefghijkl"));
	printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
	printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
}
