/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 01:03:35 by jjourne           #+#    #+#             */
/*   Updated: 2016/09/23 01:18:05 by jjourne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char    *ft_strdup(char *src)
{
	char *dup;
	char *res;

	res = 0;
	if (src != '\0')
	{
		dup = malloc(sizeof(*dup) * (ft_strlen(src) + 1));
		if (dup != '\0')
		{
			res = ft_strcpy(dup, src);
		}
	}
	return (res);
}
