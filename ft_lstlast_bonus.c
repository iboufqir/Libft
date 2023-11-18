/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:48:34 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/11 11:55:39 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (!lst)
		return (NULL);
	while (current->next)
	{
		current = current->next;
	}
	return (current);
}
/* int main()
{
	t_list *node1 = ft_lstnew("imane");
	t_list *node2 = ft_lstnew("maryam");
	t_list *node3 = ft_lstnew("moaad");

	t_list *lst = node1;
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	t_list *current = ft_lstlast(lst);
	printf("%s",(char *)current->content);
} */