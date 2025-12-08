/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiorav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 13:35:47 by alfiorav          #+#    #+#             */
/*   Updated: 2025/12/08 13:35:47 by alfiorav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	i;

	dst = ft_calloc((ft_strlen(s) + 1), sizeof (char));
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