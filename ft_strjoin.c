#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int	i;
	int	len1;
	int	len2;

	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	s = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!s)
		return (0);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		s[len1 + i] = s2[i];
		i++;
	}
	return (s);
}

/* int main (int argc, char **argv)
{
	if (argc == 3)
	{
		char *s = ft_strjoin(argv[1], argv[2]);
		printf("%s", s);
		if (s[ft_strlen(s)] == '\0')
			printf("\\0\n");
	}
} */
