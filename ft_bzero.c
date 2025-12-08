#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, 0, n);
}

/* int main (void)
{
	int c = 4;
	char str[10] = "ashdakhsdf";
	ft_bzero(str, c);
	int i = 0;
	while(i < 10)
	{
		printf("%c", str[i]);
		i++;
	}
} */