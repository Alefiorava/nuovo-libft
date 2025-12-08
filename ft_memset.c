/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiorav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 13:35:11 by alfiorav          #+#    #+#             */
/*   Updated: 2025/12/08 13:35:11 by alfiorav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	char				*b;

	b = s;
	i = 0;
	while (i < n)
	{
		b[i] = c;
		i++;
	}
	return (s);
}

/* int main (void)
{
	int c = 65;
	char str[11] = "awawawawaw";
	ft_memset(str, c, 9);
	printf("%s\n", str);
} */