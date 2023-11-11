/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:29:06 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/05 14:59:18 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;

	r = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (r == 0)
		return (NULL);
	ft_memcpy(r, s1, ft_strlen(s1));
	ft_memcpy(r + ft_strlen(r), s2, ft_strlen(s2));
	return (r);
}
/* int main()
{
    char s1[] = "imane";
    char s2[] = "hello";
    printf("%s", ft_strjoin(s1,s2));
} */
