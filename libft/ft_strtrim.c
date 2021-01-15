/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:30:19 by dbrignon          #+#    #+#             */
/*   Updated: 2021/01/15 15:45:34 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	i = 0;
	end = strlen(s1);
	start = 0;
	while (start < end && (ft_strchr(set, (int)s1[start]) != 0))
		start++;
	while (end > start && (ft_strchr(set, (int)s1[end]) != 0))
		end--;
	if (end <= start)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (end - start + 2));
	if (str == NULL)
		return (NULL);
	while (start <= (end))
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
