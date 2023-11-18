/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:50:34 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/17 16:22:22 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static int	word_count(const char *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*str == c)
			x = 0;
		str++;
	}
	return (count);
}

static void	ft_initiate_vars(size_t *i, int *j, int *s_word)
{
	*i = -1;
	*j = 0;
	*s_word = -1;
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	i;
	int		j;
	int		start;

	ft_initiate_vars(&i, &j, &start);
	res = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			res[j] = ft_substr(s, start, i - start);
			if (!(res[j]))
				return (ft_free(res, j));
			start = -1;
			j++;
		}
	}
	return (res);
}

/* int main()
{
	char inputString[] = "  This is a sample string split by spaces";
	char **result = ft_split(inputString, ' ');

	if (result)
	{
		int i = 0;
		while (result[i] != NULL)
		{
			printf("Word %d: %s\n", i, result[i]);
			free(result[i]); // Assurez-vous de libérer la mémoire de chaque mot
			i++;
		}

		free(result); // Assurez-vous de libérer la mémoire du tableau de mots
	}
	else
	{
		printf("Échec de l'allocation de mémoire.\n");
	}

	return 0;
} */
