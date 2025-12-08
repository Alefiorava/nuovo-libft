#include <stdio.h>
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long int	i;

	i = 0;
	while(i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/* int main(void)
{
	char dest[80] = "blablabla";
	char src[80] = "pipopi";
	
	printf("dest prima: %s\n", dest);
	ft_memcpy(dest, src, 4);
	printf("dest dopo; %s\n", dest);
} */