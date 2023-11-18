/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:35:16 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/15 12:48:02 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc ;
	char			*r;

	i = 0;
	r = NULL;
	cc = (char)c;
	while (s[i])
	{
		if (s[i] == cc)
			r = (char *)&s[i];
		i++;
	}
	if (s[i] == cc)
		r = (char *) &s[i];
	return (r);
}
/* int main(void)
{
    const char *str1 = "Hello, World!";
    char *result1 = ft_strrchr(str1, 'o');
    printf("Result 1: %s\n", result1);

    const char *str2 = "This is a test";
    char *result2 = ft_strrchr(str2, 'i');
    printf("Result 2: %s\n", result2);

    const char *str3 = "No matching character here";
    char *result3 = ft_strrchr(str3, 'x');
    printf("Result 3: %s\n", result3);

    const char *str4 = "This string has a null character \0 inside.";
    char *result4 = ft_strrchr(str4, '\0');
    printf("Result 4: %s\n", result4);

    return 0;
} */
