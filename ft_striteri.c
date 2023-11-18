/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:13:28 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/17 12:20:42 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* void sample_function(unsigned int index, char *c)
{
	if(*c <= 'z' && *c >= 'a')
		*c -=  32;
}

int main()
{
	char test_string[] = "Hello, World!";

	ft_striteri(test_string, sample_function);
	printf("%s" ,test_string);
	return 0;
} */