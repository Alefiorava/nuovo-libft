/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiorav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:27:55 by alfiorav          #+#    #+#             */
/*   Updated: 2025/12/08 12:04:02 by alfiorav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char charset)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && str[i] == charset)
			i++;
		if (str[i])
			word++;
		while (str[i] && str[i] != charset)
			i++;
	}
	return (word);
}

void	free_arr(char **str, int pstr)
{
	while (pstr > 0)
	{
		pstr--;
		free(str[pstr]);
	}
	free(str);
	return ;
}

void	allocate_words(const char *str, char charset, char **split)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && str[i] == charset)
			i++;
		if (str[i])
		{
			j = 0;
			while (str[i] && str[i] != charset)
			{
				j++;
				i++;
			}
			split[word] = ft_calloc((j + 1), sizeof(char));
			if (!split[word])
				return (free_arr(split, word));
			word++;
		}
	}
}

void	trasfer_words(const char *str, char charset, char **split)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	j = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && str[i] == charset)
			i++;
		if (str[i])
		{
			j = 0;
			while (str[i] && str[i] != charset)
			{
				split[word][j] = str[i];
				j++;
				i++;
			}
			split[word][j] = '\0';
			word++;
		}
	}
}

char	**ft_split(const char *str, char charset)
{
	char	**split;

	if (!str)
		return (NULL);
	split = (char **)ft_calloc(count_words(str, charset) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	allocate_words(str, charset, split);
	trasfer_words(str, charset, split);
	return (split);
}
/*
int	main(void)
{
	char str[] = "ahbhs ,sjdagj,aasd aysugd ,asd";
	char charset[] = {" ,"};
	int i = 0;
	int n = count_words(str, charset);
	
	printf("parole separate = %d\n", n);
	
	char **split = ft_split(str, charset);
	while (i < n)
	{
		printf("%s\n", split[i]);
		i++;
	}
}
*/

/* int main(int argc, char **argv)
{
	if(argc == 3)
	{
		char **split = ft_split(argv[1], argv[2][0]);
		int i = 0;
		while(i < count_words(argv[1], argv[2][0]))
		{
			printf("%s\n", split[i]);
			i++;
		}
		free (split);
	}
} */