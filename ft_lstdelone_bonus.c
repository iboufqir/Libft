/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:14:26 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/17 11:51:22 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/* void del(void *s)
{
		free(s); 
}

int main() {
    t_list *node1 = ft_lstnew(ft_strdup("imane"));
    
    printf("%s\n", node1->content);

    ft_lstdelone(node1, del);
	printf("%s\n",node1->content);
    return 0;
} */