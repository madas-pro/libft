#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char    *ptr;

    i = 0;
    ptr = malloc(len + 1);
    if (ptr == NULL)
        return (NULL);
    while (i < len)
    {
        ptr[i] = s[start + i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

int main(void)
{
	char	*string;
	char	*newstr;

	string = "this is a copy";
	/* Make newstr point to a duplicate of string*/
	if ((newstr = ft_substr(string, 4, 15)) != NULL)
		printf("The new string is: %s\n", newstr);
	return (0);
    free(newstr);
}