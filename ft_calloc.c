#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*str;

	if(!nmemb || !size)
		return(malloc(0));
	if(nmemb > 2147483647 / size)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (0);
	ft_bzero(str, nmemb * size);
	return (str);
}

/* int main (int argc, char **argv)
{
	if (argc == 3)
	{
		char *str = ft_calloc(ft_atoi(argv[1]), ft_atoi(argv[2]));
		int i = 0;
		while (i < ft_atoi(argv[1]) * ft_atoi(argv[2]))
		{
			printf("%d ", ((unsigned char *)str)[i]);
			i++;
		}
	}
} */