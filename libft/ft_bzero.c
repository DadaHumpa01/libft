/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:34:28 by dbrignon          #+#    #+#             */
/*   Updated: 2021/01/15 15:39:13 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*mem;

	i = 0;
	mem = (unsigned char *)str;
	while (i < n)
	{
		mem[i] = '\0';
		i++;
	}
}
