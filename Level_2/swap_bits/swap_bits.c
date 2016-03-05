/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 06:35:45 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/05 06:51:34 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	tmp;

	tmp = octet & 0xF0;
	octet = octet & 0x0F;
	octet <<= 4;
	tmp >>= 4;
	octet = octet | tmp;
	return (octet);
}
