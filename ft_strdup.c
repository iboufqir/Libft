/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:41:42 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/05 13:11:29 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;

	p = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, ft_strlen(s1));
	return (p);
}
/* int main()
{
    char src[] = "imane hello";
    printf("%s" ,ft_strdup(src));
} */
