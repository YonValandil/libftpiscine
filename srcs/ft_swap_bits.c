/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapbits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 21:42:18 by jjourne           #+#    #+#             */
/*   Updated: 2016/09/23 01:21:07 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_swap_bits(unsigned char octet)
{
	unsigned char tmp;

	tmp = octet & 0x0f;
	octet = octet & 0xf0;
	tmp = tmp << 4;
	octet = octet >> 4;

	return (tmp | octet);
}
