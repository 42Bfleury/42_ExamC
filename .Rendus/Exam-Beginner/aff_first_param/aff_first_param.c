/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 11:07:45 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/03 11:25:38 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_putstr(char *str)
{
	while (*str++)
		ft_putchar(*(str - 1));
}

int		main(int ac, char *av[])
{
	if (ac > 1)
		ft_putstr(av[1]);
	ft_putchar('\n');
	return (0);
}
