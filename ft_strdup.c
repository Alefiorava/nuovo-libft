#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	i;

	dst = ft_calloc((ft_strlen(s) + 1), sizeof (char));
	/* dst = malloc((ft_strlen(s) + 1)); */
	if (!dst)
		return (0);
	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/* int main (int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = ft_strdup(argv[1]);
		printf("%s", str);
		if (str[ft_strlen(str)] == '\0')
			printf("\\0\n");
	}
} */

/* int main (void)
{
	char *s = ft_strdup((char *)"coucou");
	printf("%d\n", strcmp(s, "coucou"));
} */