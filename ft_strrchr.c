#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(((char *)s));
	while (i != 0 && ((char *)s)[i] != (unsigned char)c)
		i--;
	if (s[i] == (unsigned char)c)
			return ((char *)s + i);
	return (0);
}

/* int main (int argc,char **argv)
{
	if (argc == 3)
	{
		printf("%s", ft_strrchr(argv[1], argv[2][0]));
	}
} */

