#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long int	i;

	i = 0;
	while(i < n)
	{
		if(((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
			return (((const unsigned char *)s1)[i] - ((const unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/* int main(int argc, char **argv)
{
	if(argc == 4)
	{
		printf("%d", ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])));
	}
} */