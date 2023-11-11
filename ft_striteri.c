/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:13:28 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/06 16:45:58 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* void toUpperCase(unsigned int index, char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 32;
    }
}

int main() {
    char testString[] = "Hello, World!";
    
    printf("Original String: %s\n", testString);

    // Utilisez ft_striteri pour convertir en majuscules
    ft_striteri(testString, toUpperCase);

    printf("Modified String: %s\n", testString);

    return 0;
} */
