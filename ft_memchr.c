/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:07:15 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/03 16:19:34 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	cc;
	size_t			i;

	ss = (unsigned char *)s;
	cc = (char)c;
	i = 0;
	while (i < n)
	{
		if (ss[i] == cc)
			return ((char *)&ss[i]);
		i++;
	}
	return (0);
}
/* int main()
{
    char s[] = "imane";
    char a = 'a';
    printf("%s" , ft_memchr(s,a,3));
} */
