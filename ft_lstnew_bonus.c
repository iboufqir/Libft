/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:39:29 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/17 17:18:28 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = ft_calloc(1, sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
/* int main()
{
	int *data;
	data = malloc(sizeof(int));
	*data = 42;
	t_list	*node;
	node = ft_lstnew(data);
	printf("Contenu du noeud : %d\n", *(int *)(node->content));
} */