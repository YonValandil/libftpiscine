/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 12:11:57 by jjourne           #+#    #+#             */
/*   Updated: 2016/09/23 00:40:29 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		main(void)
{
	//char		*destcpy;
	//int		*destswap1;
	//int		*destswap2
	//unsigned char affiche;
	int			atoi;

	//*swap1 = 42;
	//*swap2 = 21;
	//ft_putchar('J');
	//ft_putstr("coucou");
	//printf("len = %d", ft_strlen("coucou"));
	//ft_swap(swap1, swap2);
	//printf("1 = %d et 2 = %d", *swap1, *swap2);
	//printf("ft_strcpy = %s", ft_strcpy(destcpy, "coucou"));
	//printf("ft_strcmp = %d\nres real = %d", ft_strcmp("ab", "abcde"), strcmp("ab", "abcde"));
	//ft_putnbr(42133742);
	atoi = ft_atoi("123456789");
	ft_putnbr(atoi);
	//affiche = ft_swap_bits('a');
	//printf("octet = %u\n", affiche);
	//ft_print_bits(250);
	

	return (0);
}
