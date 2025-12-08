#include <stdio.h>
#include "libft.h"

int  ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*int main (void)
{	
	unsigned char c1 = 's';
	unsigned char c2 = '1';
	unsigned char c3 = '/';

	printf("%d\n", ft_isalnum(c1));
	printf("%d\n", ft_isalnum(c2));
	printf("%d\n", ft_isalnum(c3));
}*/
