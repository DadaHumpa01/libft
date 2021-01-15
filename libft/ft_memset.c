/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:39:38 by dbrignon          #+#    #+#             */
/*   Updated: 2021/01/12 11:39:40 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t n)
{
	unsigned int i;
	unsigned char *mem = b;

	i = 0;
	while  (i < n)
	{
		mem[i] = (unsigned int) c;
		i++;
	}
	return b;
}
