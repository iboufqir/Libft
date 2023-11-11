/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:08:34 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/03 14:39:44 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_long(const char *len)
{
	size_t	i;

	i = 0;
	while (len[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	i;

	i = 0;
	d = ft_long(dst);
	s = ft_long(src);
	if (dstsize < d)
		return (dstsize + s);
	dstsize = dstsize - d;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[d + i] = src[i];
			i++;
		}
		dst[d + i] = '\0';
	}
	return (d + s);
}
/* int main()
{
    char d[] = "imane";
    char s[] = "hello";
    printf("%zu" ,ft_strlcat(d,s,6));
} */
