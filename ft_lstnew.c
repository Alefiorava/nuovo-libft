/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfiorav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 13:34:26 by alfiorav          #+#    #+#             */
/*   Updated: 2025/12/08 13:34:26 by alfiorav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof (t_list));
	list -> content = content;
	list -> next = NULL;
	return (list);
}

/* 2
new-> next = *lst;
*lst = new

3
tmp = lst;
while (tmp != NULL)
{
	tmp = tmp->next;
	i++;
}
return (i);

4
tmp = lst;
while (tmp != NULL)
{
	tmp = tmp->next;
}
return (tmp);

tmp = *lst;
while (tmp != NULL)
{
	tmp = tmp->next;
}
tmp->next = new */