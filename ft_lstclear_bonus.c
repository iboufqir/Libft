/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:22:41 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/11 15:16:12 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    while (*lst)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst,del);
        *lst = tmp;
    }
    free (*lst);
    *lst = NULL;
}
