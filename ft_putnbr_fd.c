/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:02:27 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/06 17:36:31 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if(n == -2147483648)
        write (fd, "-2147483648", 11);
    else if (n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(-n,fd);
    }
    else if (n <= 9)
        ft_putchar_fd(n + 48, fd);
    else
    {
        ft_putnbr_fd(n/10, fd);
        ft_putnbr_fd(n%10, fd);
    }
}

/* int main()
{
    int n = -2147483648;
    ft_putnbr_fd(n,1);
    return 0;
} */