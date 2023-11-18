/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:22:41 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/17 11:49:45 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	free (*lst);
	*lst = NULL;
}
/* void del(void *list)
{
	free(list);
}
int main()
{
	t_list *node1 = ft_lstnew(ft_strdup("imane"));
	t_list *node2 = ft_lstnew(ft_strdup("moaad"));
	t_list *node3 = ft_lstnew(ft_strdup("maryam"));
	t_list *node4 = ft_lstnew(ft_strdup("ahmed"));
	t_list *lst = node1;

	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);
	ft_lstadd_back(&lst, node4);
	
	ft_lstclear(&lst, del);
	while(lst)
	{
		printf("%s ->" , lst->content);
		lst = lst->next;
	}
} */