#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*dest;

	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	return (dest);
}