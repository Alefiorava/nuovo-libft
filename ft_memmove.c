#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long int		i;
	unsigned char			c[1024];
	unsigned long int		j;

	i = 0;
	j = ft_strlen(((char *)src));
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		c[i] = ((unsigned const char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = c[i];
		i++;
	}
	return (dest);
}
/* int main(void)
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = {0, 0, 0, 0, 0, 0, 0,};
	char s1[] = {0, 0, 0, 0, 0, 0, 0,};
	ft_memmove(s0, s, 7);
	memcmp(s, s0, 7);
	printf("%s\n", s0);
	printf("%s\n", s1);

	return (0);
} */