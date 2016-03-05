/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 08:47:01 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/05 09:02:32 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	if (n <= -10 || 10 <= n)
		ft_putnbr((n < 0) ? -(n / 10) : (n / 10));
	ft_putchar('0' + ((n < 0) ? -(n % 10) : (n % 10)));
}

int		main(int ac, char *av[])
{
	av[0] = av[0];
	ft_putnbr(ac - 1);
	ft_putchar('\n');
	return (0);
}
