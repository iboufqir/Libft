/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:36:21 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/03 20:48:42 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		len--;
		p++;
	}
	return (b);
}
/* int main()
{
    char t[] = "-365";
    ft_memset(t, '1', 1);
    ft_memset(t + 1, '3', 1);
    ft_memset(t + 2, '3', 1);
    ft_memset(t + 3, '7', 1);
    printf("%s", t);
} */
