/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:42:16 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/11 11:02:09 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}





/* char toUpperCase(unsigned int index, char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    } else {
        return c;
    }
}

int main() {
    const char *a = "45";
    
    char *r = ft_strmapi(a, toUpperCase);
    
    if (r) {
        printf("Input:  %s\n", a);
        printf("Output: %s\n", r);
        
        free(r);
    } else {
        printf("Allocation de mémoire échouée.\n");
    }

    return 0;
} */
