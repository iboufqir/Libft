/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:48:54 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/03 20:44:24 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char		*s;
	unsigned char			*d;
	size_t					i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	s = src;
	d = dst;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/* int main()
{
	char string[] = "imaneptfg";
	char *a = string + 1 ;
	char *b = string + 3 ;
	printf("%s", ft_memmove(a,b,3));
} */
