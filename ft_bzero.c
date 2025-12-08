/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiorav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 11:17:46 by alfiorav          #+#    #+#             */
/*   Updated: 2025/12/08 12:02:21 by alfiorav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, 0, n);
}

/* int main (void)
{
	int c = 4;
	char str[10] = "ashdakhsdf";
	ft_bzero(str, c);
	int i = 0;
	while(i < 10)
	{
		printf("%c", str[i]);
		i++;
	}
} */