/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiorav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 11:19:33 by alfiorav          #+#    #+#             */
/*   Updated: 2025/12/08 13:28:15 by alfiorav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nbr(int n)
{
	int	len;
	int	nbr;

	nbr = n;
	len = 0;
	if (n < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	int		nb;
	char	*nbr;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nbr = ft_calloc((count_nbr(n) + 1), sizeof(char));
	i = count_nbr(n) - 1;
	nb = n;
	if (n < 0)
	{
		nbr[0] = 45;
		nb *= -1;
	}
	while (nb > 0)
	{
		nbr[i] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	return (nbr);
}

/* int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int len = count_nbr(ft_atoi(argv[1]));
		printf("%d\n", len);
		
		char *itoa = ft_itoa(ft_atoi(argv[1]));
		printf("%s", itoa);
		if (itoa[ft_strlen(itoa)] == '\0')
			printf("\\0\n");
	}
} */

/* int main (void)
{
	printf("%s\n", ft_itoa(-1));
	printf("%d\n", ft_strlen(ft_itoa(-1)));

} */