#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned long int	i;
	int	len;

	len = ft_strlen((char *)src);
	i = 0;
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/* int main (int argc, char **argv)
{
	if (argc == 4)
	{
		int	len = ft_strlcpy(argv[1], argv[2], ft_atoi(argv[3]));
		printf("%d\n", len);
		printf("%s\n", argv[1]);
	}
} */