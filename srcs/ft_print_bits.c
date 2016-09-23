/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 22:19:35 by jjourne           #+#    #+#             */
/*   Updated: 2016/09/22 23:29:06 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_bits(unsigned char octet)
{
	int i;
	int tmp;

	i = 7;
	while (i >= 0)
	{
		tmp = octet >> i;
		ft_putchar((tmp & 1) + '0');
		i--;
	}
}
