/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 10:44:58 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/03 10:58:41 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int		main(void)
{
	int		i;

	i = 0;
	while (i++ < 26)
		ft_putchar((i % 2) ? ('a' + i - 1) : ('A' + i - 1));
	ft_putchar('\n');
	return (0);
}
