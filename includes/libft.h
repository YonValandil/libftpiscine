/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 12:14:58 by jjourne           #+#    #+#             */
/*   Updated: 2016/09/23 01:13:34 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <stdio.h>

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
void			ft_swap(int *a, int *b);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
int				ft_strcmp(char *str1, char *str2);
void			ft_putnbr(int nbr);
int				ft_atoi(char *str);
unsigned char	ft_swap_bits(unsigned char octet);
void			ft_print_bits(unsigned char octet);

#endif
