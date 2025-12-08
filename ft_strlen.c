#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

/* int main(void)
{
	char str[80] = "ascdafav";
	int i = ft_strlen(str);
	printf("%d", i);
} */
