/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/26 15:59:04 by exam              #+#    #+#             */
/*   Updated: 2015/09/26 16:09:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int	a;
	int	b;

	a = (int)malloc(sizeof(int));
	b = (int)malloc(sizeof(int));
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi (av[2]);
		if (a > b)
			printf("%i", (a % b));
		else
			printf("%i", (b % a));
	}
	printf("\n");
	return (0);
}
