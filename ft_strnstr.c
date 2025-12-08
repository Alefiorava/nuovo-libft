/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiorav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 13:38:04 by alfiorav          #+#    #+#             */
/*   Updated: 2025/12/08 13:38:04 by alfiorav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long int	i;
	unsigned long int	j;

	if (little[0] == '\0')
		return ((char *)big);
	if (ft_strlen(little) == 0 || big == little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && i + j < len && big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}

/* int main (int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%s", ft_strnstr(argv[1], argv[2], ft_atoi(argv[3])));
	}
} */

/* int main(void)
{
	char haystack[30] = "aaabcabcd";
	printf("%s\n", ft_strnstr(haystack, "cd", 8));
} */