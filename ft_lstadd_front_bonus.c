/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:26:02 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/17 11:48:43 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/* int main()
{
    t_list *node1 = ft_lstnew("imane");
    t_list *node2 = ft_lstnew("maryam");
    t_list *node3 = ft_lstnew("moaad");

    t_list *list = node3;

    ft_lstadd_front(&list, node1);
    ft_lstadd_front(&list, node2);

    while (list)
    {
        printf("%s\n", (list->content));
        list = list -> next;
    }
} */