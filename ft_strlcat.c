#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long int	i;
	unsigned long int	j;
	size_t				len;

	len = ft_strlen((char *)src) + ft_strlen((char *)dst);
	j = ft_strlen((char *)dst);
	i = 0;
	if (size < j)
		return (size + ft_strlen(src));
	while (src[i] && j + i + 1 < size)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (len);
}

/* int main (int argc, char **argv)
{
	if (argc == 4)
	{
		int	len = ft_strlcat(argv[1], argv[2], ft_atoi(argv[3]));
		printf("%d\n", len);
		printf("%s\n", argv[1]);
	}
} */

/* int main (void)
{
	char dest[30];
	ft_memset(dest, 0, 30);
	int len = ft_strlcat(dest, "123", 0);
	printf("%d\n", len);
	printf("%s\n", dest);
	if (dest[ft_strlen(dest)] == '\0')
		printf("\\0\n");

	char dest1[30];
	ft_memset(dest1, 0, 30);
	int len2 = strlcat(dest1, "123", 0);
	printf("%d\n", len2);
	printf("%s\n", dest);

} */