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
		if ((str[i] >= 'A' && str [i] <= 'Z') //check if the current character is un uppercase letter ('A' to 'Z') 
			|| (str [i] >= 'a' && str [i] <= 'z')) // or a lowercase letter ('a' to 'z')
			i++; //if it's a letter, move to the next character in the string
		else
			return (0); //if the current character is not a letter, return 0, indicating the string contains non-alphabetic characters
	}	
	return (1); //if the loop completes without encountering non-alphabetic characters, return 1
}

int	main()
{
	//test the ft_str_is_alpha function with different input strings and print the results
	printf("%d", ft_str_is_alpha("abcdefghijkl")); //should print '1' (contains only alphabetic characters)
	printf("\n%d", ft_str_is_alpha("abc1defghijkl")); //should print '0' (contains a digit '1')
	printf("\n%d", ft_str_is_alpha("-_134556efghij67")); //should print '0' (contains non-alphabetic characters)
}
