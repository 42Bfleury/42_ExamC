/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 06:23:40 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/05 06:32:54 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int		main(int ac, char *av[])
{
	int		i;

	i = 0;
	if (ac == 2)
		while (av[1][i++])
		{
			if ('A' <= av[1][i - 1] && av[1][i - 1] <= 'Z')
				ft_putchar(av[1][i - 1] - 'A' + 'a');
			else if ('a' <= av[1][i - 1] && av[1][i - 1] <= 'z')
				ft_putchar(av[1][i - 1] - 'a' + 'A');
			else
				ft_putchar(av[1][i - 1]);
		}
	ft_putchar('\n');
	return (0);
}
