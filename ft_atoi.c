#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	ng;
	int	nb;

	i = 0;
	nb = 0;
	ng = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if(nptr[i] == '-')
			ng = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = (nb * 10) + (nptr[i] - 48);
		i++;
	}
	return (nb * ng);
}
/* int main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
	}
} */