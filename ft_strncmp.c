#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long int		i;

	i = 0;
/* 	if(!s1 || !s2)
		returun () */
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/* int main (int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d\n", ft_strncmp(argv[1], argv[2], ft_atoi(argv[3])));
	}
} */