#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	char				*b;

	b = s;
	i = 0;
	while (i < n)
	{
		b[i] = c;
		i++;
	}
	return (s);
}

/* int main (void)
{
	int c = 65;
	char str[11] = "awawawawaw";
	ft_memset(str, c, 9);
	printf("%s\n", str);
} */