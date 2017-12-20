/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakin-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 23:57:29 by aakin-al          #+#    #+#             */
/*   Updated: 2017/03/08 22:01:56 by aakin-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char	c;

	if (s == NULL)
		return ;
	while (*s)
	{
		c = *s;
		write(1, &c, 1);
		s++;
	}
	write(1, "\n", 1);
}
