/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:24:02 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/15 10:47:18 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		i;

	i = 0;
	current = lst;
	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
/* int main()
{
	t_list *node1 = ft_lstnew("imane");
	t_list *node2 = ft_lstnew("imane");
	t_list *node3 = ft_lstnew("imane");

	t_list *list = node1;
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	printf("%d",ft_lstsize(list));
} */