#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*str;
	size_t		i;

	
	if (!s)
		return (0);
	if (ft_strlen((char *)s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (0);
	if (len < 0)
		return (ft_strdup(""));
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/* int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		char *str = ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3]));
		printf("%s", str);
		if (str[ft_strlen(str)] == '\0')
			printf("\\0\n");
	}
} */
