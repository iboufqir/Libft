/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:16:53 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/17 11:56:02 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_obj = ft_lstnew(NULL);
		if (!new_obj)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_obj->content = f(lst->content);
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}
/* void	*f(void *str)
{
	char *s;
	int i;

	s = (char *)str;
	i = 0;
	while(s[i])
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return((void *)s);
}


void	del(void *str)
{
	free(str);
}

int main()
{
	t_list *node1 = ft_lstnew(ft_strdup("imane"));
	t_list *node2 = ft_lstnew(ft_strdup("moaad"));
	t_list *node3 = ft_lstnew(ft_strdup("maryam"));
	t_list *node4 = ft_lstnew(ft_strdup("ahmed"));
	t_list *list = node1;

	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	ft_lstadd_back(&list, node4);
	t_list *current = list;
	while(current)
	{
		printf ("%s ->", current->content);
		current = current->next;
	}
	printf("\n");
	t_list *new_list = ft_lstmap(list, f, del);

    current = new_list;
    while (current)
    {
        printf("%s ->", current->content);
        current = current->next;
    }
    printf("\n");
} */