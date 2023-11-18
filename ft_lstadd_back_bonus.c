/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:18:35 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/17 17:25:19 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/* int main()
{
	t_list *node1 = ft_lstnew("imane");
	t_list *node2 = ft_lstnew("maryam");
	t_list *node3 = ft_lstnew("moaad");

	t_list *list = node1;

	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	while(list)
	{
		printf("%s\n", (char *)(list->content));
		list = list->next;
	}
} */