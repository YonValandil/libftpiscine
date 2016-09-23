/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 11:32:04 by jjourne           #+#    #+#             */
/*   Updated: 2016/09/22 18:01:54 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nbr)
{
	long int lnbr;

	lnbr = nbr;
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	if (lnbr <= 9)
		ft_putchar(lnbr + '0');
	else
	{
		ft_putnbr(lnbr / 10);
		ft_putchar('0' + (lnbr % 10));
	}
}
