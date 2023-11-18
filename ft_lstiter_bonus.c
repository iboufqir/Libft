/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:00:54 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/17 11:53:30 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

/* void f(void *content) {
	printf("%s\n", (char *)content);
}

int main() {
	t_list *node1 = ft_lstnew("imane");
	t_list *node2 = ft_lstnew("maryam");
	t_list *node3 = ft_lstnew("moaad");

	t_list *lst = node1;

	// Add nodes to the list
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);


	ft_lstiter(lst, f);

	return 0;
} */