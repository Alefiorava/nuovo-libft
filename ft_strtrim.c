/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiorav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 13:38:14 by alfiorav          #+#    #+#             */
/*   Updated: 2025/12/08 13:38:14 by alfiorav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_word(char s, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

int	find_bottom(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen((char *)s1) - 1;
	if (!is_word(s1[i], (char *)set))
		return (ft_strlen((char *)s1));
	while (i >= 0)
	{
		if (is_word(s1[i], (char *)set))
		{
			if (i == 0 || is_word(s1[i - 1], (char *)set) == 0)
				return (i);
		}
		i--;
	}
	return (0);
}

int	find_top(char const *s1, char const *set)
{
	int	i;

	i = 0;
	if (!is_word(s1[0], (char *)set))
		return (0);
	while (s1[i])
	{
		if (is_word(s1[i], (char *)set))
		{
			if (is_word(s1[i + 1], (char *)set) == 0)
				return (i + 1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		end;
	int		start;

	if (!s1 || !set)
		return (0);
	end = find_bottom(s1, set);
	start = find_top(s1, set);
	if (end <= start)
	{
		s = ft_calloc(1, sizeof(char));
		return (s);
	}
	s = ft_calloc(end - start + 1, sizeof(char));
	if (!s)
		return (0);
	i = 0;
	while (i < end - start)
	{
		s[i] = s1[start + i];
		i++;
	}
	return (s);
}

/* char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	top;
	size_t	bottom;
	size_t	i;
	char	*str;

	top = 0;
	while (ft_strchr(set, s1[top]) && s1[top])
		top++;
	bottom = ft_strlen(s1) - 1;
	while (ft_strrchr(set, s1[bottom]) && bottom != 0)
		bottom--;
	str = ft_calloc((bottom - top) + 1, sizeof(char));
	i = 0;
	while (i != bottom - top + 1)
	{
		str[i] = s1[top + i];
		i++;
	}
	return (str);
} */
/* int	main (int argc, char **argv)
{
	if(argc == 3)
	{
		int j = find_bottom(argv[1], argv[2]);
		printf("bottom %d\n", j);
		int i = find_top(argv[1], argv[2]);
		printf("top %d\n", i);

		char *s = ft_strtrim(argv[1], argv[2]);
		printf("%s", s);
		if (s[ft_strlen(s)] == '\0')
			printf("\\0\n");
		
	}
} */

/* int main (void)
{
	char * i = ft_strtrim2("   xxxtripouille", "t x");
	printf("%s\n", i);
} */