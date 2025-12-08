#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned long int	i;

	i = 0;
	while (s[i] && s[i] != (unsigned char)c)
		i++;
	if (s[i] == (unsigned char)c)
			return ((char *)s + i);
	return (0);
}

/* int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s\n", ft_strchr(argv[1], argv[2][0]));
	}
} */
