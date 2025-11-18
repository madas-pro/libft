#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *string)
{
	char	*ptr;
	int	i;

	ptr = malloc(ft_strlen((char *)string) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (string[i])
	{
		ptr[i] = string[i];
		i++;
	}
	ptr[i] = '\0';
    return (ptr);
}

int	main(void)
{
	char	*string;
	char	*newstr;

	string = "this is a copy";
	/* Make newstr point to a duplicate of string*/
	if ((newstr = ft_strdup(string)) != NULL)
		printf("The new string is: %s\n", newstr);
	return (0);
    free(newstr);
}
