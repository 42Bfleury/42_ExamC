/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 07:49:52 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/05 07:57:31 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_rot_13(char *str)
{
	while (*str++)
	{
		if ('a' <= *(str - 1) && *(str - 1) <= 'z')
			ft_putchar(((*(str - 1) - 'a' + 13) % 26) + 'a');
		else if ('A' <= *(str - 1) && *(str - 1) <= 'Z')
			ft_putchar(((*(str - 1) - 'A' + 13) % 26) + 'A');
		else
			ft_putchar(*(str - 1));
	}
}

int		main(int ac, char *av[])
{
	if (ac == 2)
		ft_rot_13(av[1]);
	ft_putchar('\n');
	return (0);
}
