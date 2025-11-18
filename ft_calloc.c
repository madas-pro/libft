#include <stdio.h>

void	*calloc(size_t nmemb, size_t size)
{
	int	*ptr;

	ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
int main(void)
{
    
}